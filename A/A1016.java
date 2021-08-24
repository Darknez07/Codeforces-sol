import java.util.*;
public class A1016 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int m = input.nextInt();
        long k,left = 0;
        while(t--!=0){
            k = input.nextLong();
            k+=left;
            if(k >= m)
                System.out.println(k/m);
            else
                System.out.println(0);
            left = k % m;
        }
        input.close();
    }
}
