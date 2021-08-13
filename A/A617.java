import java.util.Scanner;

public class A617 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int dist = input.nextInt();
        int left = dist % 5;
        dist/=5;
        System.out.println(dist + (left !=0 ? 1: 0));
        input.close();
    }
}
