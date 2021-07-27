import java.util.Scanner;

public class B1543 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,sum;
        while(t--!=0){
            n = input.nextInt();
            sum = 0;
            for(int i=0;i<n;i++){
                sum+=input.nextLong();
            }
            System.out.println((n - (sum %n))*(sum % n));
        }
        input.close();
    }
}
