import java.util.Scanner;

public class A124{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a = input.nextInt();
        int b = input.nextInt();
        input.close();
        if(b + 1> n - a)
            System.out.println(n - a);
        else
            System.out.println(b + 1);
    }
}