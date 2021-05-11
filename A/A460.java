import java.util.Scanner;

public class A460 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        input.close();
        int ans = a;
        int left;
        while(a >= b){
            ans+=(a/b);
            left = (a % b);
            a/=b;
            a+=left;
        }
        System.out.println(ans);
    }
}
