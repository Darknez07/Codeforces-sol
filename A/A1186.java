import java.util.*;
public class A1186 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long m = input.nextLong();
        long k = input.nextLong();
        System.out.println(Math.min(m,k) >= n ? "Yes":"No");
        input.close();
    }
}
