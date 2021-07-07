import java.util.Scanner;
public class A82 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        input.close();
        long r = 1;
        for(;r*5<n;n-=(r*5),r*=2);
        String[] ch = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
        System.out.println(ch[(int)((n - 1)/r)]);
    }
}
