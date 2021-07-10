import java.util.Scanner;

public class A151 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        int l = input.nextInt();
        int c = input.nextInt();
        int d = input.nextInt();
        int p = input.nextInt();
        int nl = input.nextInt();
        int np = input.nextInt();
        System.out.println(Math.min((p / np) / n,Math.min((k*l / nl)/n,(c*d / n))));
        input.close();
        // System.out.println();
    }
}
