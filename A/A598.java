import java.util.Scanner;

public class A598{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n;
        int max_pow;
        while(t--!=0){
            n = input.nextLong();
            max_pow = (int)Math.floor(Math.log(n)/Math.log(2));
            n*=(n+1);
            n/=2;
            System.out.println(n - (long)Math.pow(2,max_pow + 2) + 2);
        }
        input.close();
    }
}