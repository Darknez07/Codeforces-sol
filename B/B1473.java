import java.util.Scanner;

public class B1473 {
    public static int Find_lcm(int a, int b) {
        return b == 0 ? a : Find_lcm(b, a % b);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        String a, b, an, bn;
        int lcm, apa, apb;
        while (t-- != 0) {
            a = input.next();
            b = input.next();
            an = "";
            bn = "";
            lcm = (a.length() * b.length()) / Find_lcm(a.length(), b.length());
            apa = lcm / a.length();
            apb = lcm / b.length();
            for (int i = 0; i < apa; i++) {
                an += a;
            }
            for (int i = 0; i < apb; i++) {
                bn += b;
            }
            if (an.equals(bn)) {
                System.out.println(an);
            } else {
                System.out.println(-1);
            }
        }
        input.close();
    }
}
