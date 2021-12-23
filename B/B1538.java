import java.util.*;
public class B1538 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int sum,n,ans;
        int[] a;
        while(t--!=0){
            n = input.nextInt();
            sum = 0;
            ans = 0;
            a = new int[n];
            for(int i=0;i<n;i++){
                a[i] = input.nextInt();
                sum+=a[i];
            }
            if(sum % n !=0){
                System.out.println(-1);
                continue;
            }
            sum/=n;
            for(int i=0;i<n;i++){
                if(a[i] > sum)
                    ans++;
            }
            System.out.println(ans);
        }
        input.close();
    }
}
