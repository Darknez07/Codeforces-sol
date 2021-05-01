import java.util.*;
public class A791 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        input.close();
        double in =  (double)y/x;
        double l = Math.log(in);
        double down = Math.log(1.5);
        int p = (int)(l/down);
        ++p;
        System.out.println(p);
    }
}
