import java.util.Scanner;

public class A1283 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        // Kyuki 24 ghante is also 23 ghante 60 mint;
        int ghante = 23, mint = 60, h, m;
        while (t-- != 0) {
            h = input.nextInt();
            m = input.nextInt();
            System.out.println((ghante - h) * 60 + (mint - m));
        }
        input.close();
    }
}
