import java.util.Scanner;

public class A1342 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b,am1,am2;
        while(t--!=0){
            am1 = input.nextLong();
            am2 = input.nextLong();
            a = input.nextLong();
            b = input.nextLong();
            if((am1+am2)*a < Math.abs(am1 - am2)*a + Math.min(am1, am2)*b){
                System.out.println((am1+am2)*a);
            }else{
                System.out.println( Math.abs(am1 - am2)*a + Math.min(am1, am2)*b);
            }
        }
        input.close();
    }
}
