import java.util.Arrays;
import java.util.Scanner;
public class C1106 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0; i<n; i++) {
            a[i] = input.nextInt();
        }
        Arrays.sort(a);
        long ans = 0;
        for(int i=0;i<n/2;i++){
            ans+=Math.pow(a[i] + a[n - i - 1], 2);
        }
        System.out.println(ans);
        input.close();
    }
}
