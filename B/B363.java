import java.util.Scanner;

public class B363{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int arr[] = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = input.nextInt();
        }
        input.close();
        int dp[] = new int[n - k + 1];
        for(int i=0;i<k;i++){
            dp[0]+=arr[i];
        }
        for(int i=k;i<n;i++){
            dp[i - k + 1]+=(dp[i - k] + arr[i]);
            dp[i - k + 1]-=arr[i - k];
        }
        int indx = 0;
        int min = Integer.MAX_VALUE;
        for(int i=0;i<n-k+1;i++){
            if(dp[i] < min){
                min = dp[i];
                indx = i;
            }
        }
        System.out.println(indx + 1);
    }
}
