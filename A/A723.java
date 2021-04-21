import java.util.Scanner;

public class A723 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        int finals;
        if(b > a &&  a > c)
            finals = b - c;
        else if(a > b && b > c)
            finals = a - c;
        else if(a > c && c > b)
            finals = a - b;
        else if(c > a && a > b)
            finals = c - b;
        else if(c > b && b > a)
            finals = c - a;
        else if(b > c && c > a)
            finals = b - a;
        else
            finals = 0;
        System.out.println(finals);
        input.close();
    }
}
