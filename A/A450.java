import java.util.Scanner;

public class A450 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int[] dp = new int[n];
        int max = 0;
        for(int i=0;i<n;i++){
            dp[i] = input.nextInt() - m;
            if(dp[i] < 0)
                dp[i] = 0;
            if(dp[i] > dp[max])
                max = i;
        }
        for(int i=n - 1;i>=0;i--){
            if((int)Math.ceil((double)dp[max]/m) == (int)Math.ceil((double)dp[i]/m)){
                max = i;
                break;
            }
        }
        System.out.println(max + 1);
        input.close();
    }
}
