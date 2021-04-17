import java.util.Scanner;

public class C1353{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,count;
        while(t--!=0){
            n = input.nextLong();
            n/=2;
            //[2 2 2 2 2]
            //[2 1 1 1 2]
            //[2 1 g 1 2]
            //[2 1 1 1 2]
            //[2 2 2 2 2]
            // Note 8 ones
            // 16 twos
            // equals to 8*(1*1 + 2*2)
            //In general 8*(1*1 + 2*2 +...+mid*mid)
            count = 8*(n + 1)*(2*n + 1)*n/6;
            System.out.println(count);
        }
        input.close();
    }
}