import java.util.Arrays;
import java.util.Scanner;

public class A1399 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int ok;
        while(t--!=0){
            n = input.nextInt();
            ok = 1;
            int[] arr =new int[n];
            for(int i=0;i<n;i++){
                arr[i] = input.nextInt();
            }
            Arrays.sort(arr);
            for(int i=1;i<n;i++)
                ok &= (arr[i] - arr[i - 1] <= 1) ? 1:0;
            if (ok==1) System.out.println("YES");
            else System.out.println("NO");
        }
        input.close();
    }
}
