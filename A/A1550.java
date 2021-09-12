import java.util.Scanner;

public class A1550 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int sum;
        while(t--!=0){
            sum = input.nextInt();
            System.out.println((int)Math.ceil(Math.sqrt(sum)));
        }
        input.close();
    }
}
