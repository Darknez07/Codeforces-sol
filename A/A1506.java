import java.util.*;
public class A1506 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n,m,x;
        while(t--!=0){
            n = input.nextLong();
            m = input.nextLong();
            x = input.nextLong();
            System.out.println(((x % n == 0 ? n: x % n)- 1)*m+(x % n == 0 ? x/n: (x/n + 1)));
        }
        input.close();
    }
}
