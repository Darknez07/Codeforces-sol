import java.util.Scanner;
//Copied from https://www.github.com/DionysiosB/CodeForces
public class B1199 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long h = input.nextLong();
        long l = input.nextLong();
        double ans = (l*l - h*h)/(2.0*h);
        System.out.println(ans);
        input.close();
    }
}
