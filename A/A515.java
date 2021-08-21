import java.util.*;
public class A515 {
    public static void main(String[] args) {
        Scanner  input = new Scanner(System.in);
        long a = input.nextLong();
        long b = input.nextLong();
        long c = input.nextLong();
        long sum = Math.abs(a) + Math.abs(b);
        if(sum !=0 && c < sum)
            System.out.println("No");
        else
            System.out.println((c - sum) % 2 == 0 ? "Yes": "No");
        input.close();
    }
}
