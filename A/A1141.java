import java.util.Scanner;

public class A1141 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int power = 0;
        if (m % n != 0) {
            System.out.println(-1);
        } else {
            m /= n;
            if (m == 1) {
                System.out.println(0);
            } else {
                while (m % 2 == 0 && m != 0) {
                    m /= 2;
                    power++;
                }
                while (m % 3 == 0 && m != 0) {
                    m /= 3;
                    power++;
                }
                if(power == 0 || m!= 1){
                    System.out.println(-1);
                }else{
                    System.out.println(power);
                }
            }
        }
        input.close();
    }
}