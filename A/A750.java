import java.util.Scanner;

public class A750 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        input.close();
        int avial = 240 - b;
        int i = 0, all = 5 * a * (a + 1) / 2,j=0;
        if (avial >= all) {
            System.out.println(a);
        } else {
            for (i = 1; i <= a; i++) {
                if (5 *i > avial)
                    break;
                avial -= 5 * i;
                j++;
            }
            System.out.println(j);
        }
    }
}
