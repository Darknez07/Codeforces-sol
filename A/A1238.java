import java.math.BigInteger;
import java.util.Scanner;

public class A1238 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t--!=0){
            BigInteger a = new BigInteger(input.next());
            BigInteger b = new BigInteger(input.next());
            a = a.subtract(b);
            if(a.compareTo(BigInteger.ZERO) <= 0){
                System.out.println("NO");
            }else if(a.compareTo(BigInteger.ONE) == 1){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}
