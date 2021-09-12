import java.util.*;
public class A1368 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b,n,temp;
        int steps;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            n = input.nextLong();
            if(b < a){
                temp = b;
                b = a;
                a = temp;
            }
            steps = 0;
            while(a <= n && b <= n){
                if(steps % 2 == 0)
                    a+=b;
                else
                    b+=a;
                steps++;
            }
            System.out.println(steps);
        }
        input.close();
    }
}
