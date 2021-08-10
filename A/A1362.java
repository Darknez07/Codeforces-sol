import java.util.Scanner;

public class A1362{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,q,temp;
        int count;
        while(t--!=0){
            q = input.nextLong();
            n = input.nextLong();
            count = 0;
            if(n == q){
                System.out.println(0);
                continue;
            }
            if(q > n){
                temp = n;
                n = q;
                q = temp;
            }
            while(n % 8 == 0 && (n/8) >= q){
                n/=8;
                count++;
            }
            if(n == q){
                System.out.println(count);
                continue;
            }
            while(n % 4 == 0 && (n/4) >= q){
                n/=4;
                count++;
            }
            if(n == q){
                System.out.println(count);
                continue;
            }
            while(n % 2 == 0 && (n/2) >= q){
                n/=2;
                count++;
            }
            if(n == q){
                System.out.println(count);
                continue;
            }else{
                System.out.println(-1);
            }
        }
        input.close();
    }
}