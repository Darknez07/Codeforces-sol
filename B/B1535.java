import java.util.ArrayList;
import java.util.Scanner;

public class B1535 {
    public static int gcd(int a,int b){
        return b == 0 ? a: gcd(b, a % b);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        long o,e,ans;
        int[] arr;
        while(t--!=0){
            n = input.nextInt();
            arr = new int[n];
            ArrayList<Integer> odd = new ArrayList<Integer>();
            ArrayList<Integer> even = new ArrayList<Integer>();
            for(int i=0;i<n;i++){
                arr[i] = input.nextInt();
                if(arr[i] % 2 == 0)
                    even.add(arr[i]);
                else
                    odd.add(arr[i]);
            }
            o = odd.size();
            e = n - o;
            ans = e*o;
            for(int i=0;i<o;i++){
                for(int j=i + 1;j<o;j++){
                    if(gcd(odd.get(i), 2*odd.get(j)) > 1)
                        ans++;
                }
            }
            ans += (e*(e - 1)/2);
            System.out.println(ans);
        }
        input.close();
    }
}
