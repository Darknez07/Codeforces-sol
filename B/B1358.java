import java.util.Arrays;
import java.util.Scanner;

public class B1358 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,i;
        int[] a;
        while(t--!=0){
            n = input.nextInt();
            a = new int[n];
            for(i=0;i<n;i++){
                a[i] = input.nextInt();
            }
            Arrays.sort(a);
            for(i=n - 1;i>=0;i--){
                if((i + 1) >= a[i])
                    break;
            }
            System.out.println(i+2);
        }
        input.close();
    }
}
