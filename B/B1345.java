import java.util.Scanner;

public class B1345 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n;
        long dp[] = new long[1000000];
        dp[0] = 2;
        for(int i=1;i<1000000;i++){
            dp[i]+=(dp[i - 1] + (2*(i+1) + i));
        }
        int i,count;
        while(t--!=0){
            i = 0;
            n = input.nextLong();
            while(dp[i] <= n){i++;}
            if(i == 0){
                System.out.println(0);
            }else{
                count = 0;
                long times;
                for(int j=i - 1;j>=0;j--){
                    if(n - dp[j] >= 0){
                        times = n/dp[j];
                        n-= (times*dp[j]);
                        count+=times;
                    }
                }
                System.out.println(count);
            }
        }
        input.close();
    }
}
