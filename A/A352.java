import java.util.Scanner;

public class A352 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] a = new int[6];
        for (int i = 0; i < n; i++) {
            a[input.nextInt()]++;
        }
        int code;
        if (a[5] < 9) {
            if (a[0] >= 1)
                System.out.println(0);
            else
                System.out.println(-1);
        } else {
            if (a[0] == 0) {
                System.out.println(-1);
            } else {
                code = 9 * (a[5] / 9);
                for (int i = 0; i < code; i++) {
                    System.out.print(5);
                }
                for (int i = 0; i < a[0]; i++) {
                    System.out.print(0);
                }
            }
        }
        input.close();
    }
}