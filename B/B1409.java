import java.util.Scanner;

public class B1409 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a = 0,b = 0,x,y,n,store1,store2,val,A,B,N;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            x = input.nextLong();
            y = input.nextLong();
            n = input.nextLong();
            A = a;
            B = b;
            N = n;
            val = a - x;
            val = (val < n) ? val : n;
            a-=val;
            n-=val;
            val = b - y;
            val = (val < n) ? val : n;
            b-=val;
            store1 = a*b;

            a = A;
            b = B;
            n = N;
            val = b - y;
            val = (val < n) ? val : n;
            b-=val;
            n-=val;
            val = a - x;
            val  = (val < n) ? val : n;
            a-=val;
            store2 = a*b;

            val = (store1 > store2) ? store2 : store1;
            System.out.println(val);
        }
        input.close();
    }
}
