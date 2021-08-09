import java.util.Scanner;

public class A670 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int days = input.nextInt();
        int max,min;
        max = (int)2*(days/7) + (days % 7 > 2 ? 2: days % 7);
        min = (int)2*(days/7);
        if(days % 7 == 6)
            min++;
        System.out.println(min+" "+max);
        input.close();
    }
}
