import java.util.Scanner;

public class A1430 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int l, max;
        boolean out;
        while (t-- != 0) {
            l = input.nextInt();
            out = false;
            if (l % 3 == 0) {
                System.out.println(l / 3 + " " + 0 + " " + 0);
            } else if (l % 5 == 0) {
                System.out.println(0 + " " + l / 5 + " " + 0);
            } else if (l % 7 == 0) {
                System.out.println(0 + " " + 0 + " " + l / 7);
            } else {
                max = l / 3;
                if (max <= 2) {
                    max = l;
                }
                for (int i = 0; i < max; i++) {
                    for (int j = 0; j < max; j++) {
                        for (int k = 0; k < max; k++) {
                            if (3 * i + 5 * j + 7 * k == l) {
                                System.out.println(i + " " + j + " " + k);
                                out = true;
                                break;
                            }
                        }
                        if (out)
                            break;
                    }
                    if (out)
                        break;
                }
                if(!out)
                    System.out.println(-1);
            }
        }
        input.close();
    }
}
