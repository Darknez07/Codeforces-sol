import java.util.Arrays;
import java.util.Scanner;

public class A160 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long[] arr = new long[n];
        long sum = 0;
        for(int i=0;i<n;i++){
            arr[i] = input.nextLong();
            sum+=arr[i];
        }
        input.close();
        long mid = 0;
        Arrays.sort(arr);
        for(int i=n-1;i>=0;i--){
            mid+=arr[i];
            if(mid > sum - mid){
                mid = n - i;
                break;
            }
        }
        System.out.println(mid);
    }
}
