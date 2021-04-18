import java.util.Scanner;

public class A617 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int dist = input.nextInt();
        if(dist > 5)
            if(dist % 5 == 0)
                System.out.println(dist/5);
            else
                System.out.println(dist/5 + 1);
        else
            System.out.println(1);
        input.close();
    }
}
