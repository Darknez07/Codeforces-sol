import java.util.Scanner;

public class C1430 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n, start, end;
        while (t-- != 0) {
            n = input.nextInt();
            System.out.println(2);
            start = n - 2;
            end = n;
            if (n == 2) {
                System.out.println(1 + " " + 2);
            } else {
                for (int i = 0; i < n - 1; i++) {
                    System.out.println(start + " " + end);
                    start = (start + end) / 2;
                    if (end == n - 1)
                        end -= 2;
                    else
                        end--;
                }
            }
        }
        input.close();
    }
}
