import java.util.Scanner;

public class A1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        input.close();
        long mid = (a/c);
        long mid2 = (b/c);
        long ans = (mid*mid2);
        if(a % c!=0){
            ans+=(b/c);
            if(b % c!=0){
                ans+=(a/c);
                ans++;
            }
        }else{
            if(b % c!=0){
                ans+=(a/c);
            }
        }
        System.out.println(ans);
    }
}
