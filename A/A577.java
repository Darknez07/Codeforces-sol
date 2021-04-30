import java.util.Scanner;

public class A577 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int x = input.nextInt();
        int count = 0;
        for(int i=1; i<=n; i++) {
            if(x % i == 0 && x/i <= n)
                count++;
        }
        input.close();
        System.out.println(count);
    }
}
