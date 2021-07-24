import java.math.BigInteger;
import java.util.Scanner;
// Not complete failing
public class A1204 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigInteger big = new BigInteger(input.next(), 2);
        if(big.signum() == 0){
            System.out.println(0);
        }else{
            double a= Math.log10(4.0);
            double x = Math.log10(big.doubleValue())/a;
            if(big.bitLength() > 80){
                boolean res = big.testBit(0);
                // boolean res2 = big.testBit(4);
                if(res)
                    System.out.println((int)(Math.ceil(x) + 1));
                else
                    System.out.println((int)(Math.ceil(x)));
            }else{
                System.out.println((int)Math.ceil(x));
            }
        }
        input.close();
    }
}