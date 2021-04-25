import java.util.Scanner;

public class B1335 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a, b, c;
        String n, q;
        String x = new String("abcdefghijklmnopqrstuvwxyz");
        while (t-- != 0) {
            n = "";
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            if (c == 26) {
                b = a % 26;
                a /= 26;
                while (a-- != 0) {
                    n += x;
                }
                n += x.substring(0, b);
            } else if (c == b) {
                q = x.substring(0, b);
                c = a % b;
                a /= b;
                while (a-- != 0) {
                    n += q;
                }
                n+=x.substring(0,c);
            } else {
                q = x.substring(0, c);
                b = a % c;
                a /= c;
                while (a-- != 0) {
                    n += q;
                }
                n += x.substring(0, b);
            }
            System.out.println(n);
        }
        input.close();
    }
}
