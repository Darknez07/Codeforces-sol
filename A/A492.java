import java.util.Scanner;

public class A492 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int start = 1,counter=1;
        while(n >= start) {
            n-=start;
            ++counter;
            start = counter;
            start*=(start + 1);
            start/=2;
        }
        System.out.println(counter - 1);
        input.close();
    }
}
