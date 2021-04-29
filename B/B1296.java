import java.util.Scanner;

public class B1296 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,spend,left;
        while(t--!=0){
            n = input.nextLong();
            spend = 0;
            left = 0;
            while(n >= 10){
                left = (n%10);
                n-=(n % 10);
                spend+=n;
                n/=10;
                n+=left;
            }
            System.out.println(spend+n);
        }
        input.close();
    }
}
