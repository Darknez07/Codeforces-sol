import java.util.Scanner;
public class A1560 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] dp = new int[1001];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        int n;
        while(t--!=0){
            n = input.nextInt();
            if(dp[n]!=0){
                System.out.println(dp[n]);
                continue;
            }
            int i = 5;
            int j = 4;
            while(j <= n){
                if(i % 3 == 0 || i % 10 == 3){
                    i++;
                }else{
                    dp[j] = i;
                    j++;
                    i++;
                }
            }
            System.out.println(dp[n]);
        }
        input.close();
    }
}
