import java.util.Scanner;

public class A1350{
    public static long F(long a){
        for(long i=3;i<=10e6;i++){
            if(a % i == 0){
                return i;
            }
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,k;
        while(t--!=0){
            n = input.nextLong();
            k = input.nextLong();
            if(n % 2 == 0)
                n+=(k*2);
            else{
                n+=F(n);
                n+=((k-1)*2);
            }
            System.out.println(n);
        }
        input.close();
    }
}