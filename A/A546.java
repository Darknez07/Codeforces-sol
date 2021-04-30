import java.util.*;
public class A546 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int n = input.nextInt();
        int w = input.nextInt();
        input.close();
        int out = (k*(w+1)*w)/2 - n;
        if(out < 0)
            System.out.println(0);
        else
            System.out.println(out);
    }
}
