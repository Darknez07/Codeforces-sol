import java.math.BigInteger;
import java.util.Scanner;

public class A1475 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- != 0) {
            boolean no = false;
            BigInteger b = new BigInteger(input.next());
            BigInteger two = new BigInteger("2");
            if (b.mod(two) == BigInteger.ONE) {
                System.out.println("YES");
            } else {
                while (b.mod(BigInteger.TWO) == BigInteger.ZERO) {
                    b = b.divide(two);
                    if(b.compareTo(BigInteger.ONE) == 0){
                        no = true;
                        break;
                    }
                }
                if(no){
                    System.out.println("NO");
                }else{
                    System.out.println("YES");
                }
            }
        }
        input.close();
    }
}