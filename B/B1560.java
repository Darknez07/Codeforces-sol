import java.util.*;
public class B1560 {
    public static void main(String[] args) {
        Scanner input = new Scanner (System.in);
        int t = input.nextInt();
        int a,b,c,n;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            n = 2*Math.abs(a - b);
            if(n < a || n < b || n < c){
                System.out.println(-1);
            }else{
                n/=2;
                System.out.println(c > n ? c - n: c + n);
            }
        }
        input.close();
    }
}
