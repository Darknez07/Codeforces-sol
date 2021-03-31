import java.util.Scanner;

public class B688 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String x = input.next();
        StringBuilder std = new StringBuilder(x);
        System.out.println(x+std.reverse().toString());
        input.close();
    }
}
