import java.util.Arrays;
import java.util.Scanner;

public class B1248 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = input.nextInt();
        }
        Arrays.sort(a);
        int elm = n/2;
        long x =0, y = 0;
        for(int i=0;i<elm;i++){
            y+=a[i];
            x+=(a[n - i - 1]);
        }
        if(n % 2 == 1){
            if(y > x)
                y+=(a[n/2]);
            else
                x+=(a[n/2]);
        }
        System.out.println(y*y+x*x);
        input.close();
    }
}
