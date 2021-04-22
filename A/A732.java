import java.util.Scanner;

public class A732 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a = input.nextInt();
        input.close();
        int i;
        for (i = 1;i<=10; i++) {
            if((i*n) % 10 == 0)
                    break;
            if ((i * n) % 10 == a)
                    break;
        }
        System.out.println(i);
    }
}