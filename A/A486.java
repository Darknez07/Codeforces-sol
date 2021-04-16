import java.util.Scanner;

public class A486 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        if(n % 2!=0)
            System.out.println(-(n+1)/2);
        else
            System.out.println(n/2);
        input.close();
    }
}
