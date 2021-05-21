import java.math.BigInteger;
import java.util.Scanner;

public class A1527 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,f;
        while(t--!=0){
            a = input.nextLong();
            f = Long.toBinaryString(a).length();
            System.out.println((long)Math.pow(2,f - 1) - 1);
        }
        input.close();
    }
}
