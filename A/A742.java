import java.util.Scanner;

public class A742 {
    public static void main(String[] args) {
        int[] possible = {8,4,2,6};
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        if(n == 0)
            System.out.println(1);
        else
            System.out.println(possible[(n - 1) % 4]);
        input.close();
    }
}
