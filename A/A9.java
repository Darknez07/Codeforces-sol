import java.util.Scanner;
public class A9 {
    public static int gcd(int a, int b){
        return a == 0 ? b: gcd(b % a, a);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int y = input.nextInt();
        int w = input.nextInt();
        int chances = 6 - Math.max(y, w) + 1;
        int ans = gcd(chances,6);
        System.out.println(chances/ans+"/"+6/ans);
        input.close();
    }
}
