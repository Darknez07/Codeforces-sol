import java.util.Scanner;

public class A766{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String a = input.next();
        String b = input.next();
        input.close();
        if(a.equals(b))
            System.out.println(-1);
        else
        // This is because any one of string be fine
            System.out.println(a.length() > b.length() ? a.length(): b.length());
    }
}