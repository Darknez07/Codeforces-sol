import java.util.Scanner;

public class A1476 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,k;
        while(t--!=0){
            n = input.nextInt();
            k = input.nextInt();
            if(n % k == 0){
                System.out.println(1);
            }else{
                if(n > k){
                    System.out.println(2);
                }else if(k % n == 0){
                    System.out.println(k/n);
                }else{
                    System.out.println((int)Math.ceil((double)k/n));
                }
            }
        }
        input.close();
    }
}
