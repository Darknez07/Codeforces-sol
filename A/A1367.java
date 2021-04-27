import java.util.Scanner;

public class A1367 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- != 0) {
            String s = input.next();
            System.out.print(s.charAt(0));
            for (int i = 1; i < s.length() - 1; i += 2) {
                System.out.print(s.charAt(i));
            }
            System.out.print(s.charAt(s.length()-1));
            System.out.println();
        }
        input.close();
    }
}
