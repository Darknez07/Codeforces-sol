import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;
// Lot of time limit exceeded
public class B368 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n =input.nextInt();
        int t = input.nextInt();
        ArrayList<Integer> lst = new ArrayList<Integer>();
        HashSet<Integer> set = new HashSet<Integer>();
        for(int i=0;i<n;i++){
            lst.add(input.nextInt());
        }
        int[] dp = new int[n];
        dp[n - 1] = 1;
        set.add(lst.get(n - 1));
        for(int i=n-2;i>=0;i--){
            dp[i]+=dp[i + 1];
            if(!set.contains(lst.get(i))){
                dp[i]+=1;
                set.add(lst.get(i));
            }
        }
        while(t--!=0){
            System.out.println(dp[input.nextInt() - 1]);
        }
        input.close();
    }
}
