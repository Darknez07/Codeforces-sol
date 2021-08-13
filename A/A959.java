import java.util.Scanner;

public class A959{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        System.out.println(n % 2 == 0 ? "Mahmoud": "Ehab");
        input.close();
    }
}