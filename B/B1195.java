import java.util.*;
public class B1195{
    // - 1.5
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double n = input.nextDouble();
        double k = input.nextDouble();
        System.out.println((long)Math.round(n + 1.5 - Math.sqrt((n + k)*2 + 2.75)));
        // System.out.println((long)(n - Math.sqrt((n + k)*8 + 9)/2 + 1.5));
        input.close();
    }
}