import java.util.Arrays;
import java.util.Scanner;

public class A1279 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long[] a;
        while(t--!=0){
            a = new long[3];
            a[0] = input.nextLong();
            a[1] = input.nextLong();
            a[2] = input.nextLong();
            Arrays.sort(a);
            if((a[2] - 1) <= (a[1] + a[0])){
                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
        input.close();
    }
}
