import java.util.Scanner;

public class A1418 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a, b, n,dash,remain;
        while (t-- != 0) {
            a = input.nextLong();
            b = input.nextLong();
            n = input.nextLong();
            dash = (b*n + n - a)/(a - 1) + 1;
            remain = a + (a - 1)*(dash - 1) - b*n;
            if(remain < n){
                dash++;
            }
            System.out.println(dash + n);
        }
        input.close();
    }
}
