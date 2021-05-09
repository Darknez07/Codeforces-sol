import java.util.Scanner;

public class A451 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        input.close();
        System.out.println(Math.min(a,b) % 2 == 0 ? "Malvika":"Akshat");
    }
}
