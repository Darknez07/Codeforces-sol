import java.util.*;
public class A1529 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,min = Integer.MAX_VALUE,x,cnt;
        while(t--!=0){
            n = input.nextInt();
            cnt = 0;
            min = Integer.MAX_VALUE;
            for(int i=0; i<n; i++){
                x = input.nextInt();
                // Count minimum elements
                if(x < min){cnt = 1;min = x;}
                else if(x == min){cnt++;}
            }
            System.out.println(n - cnt);
        }
        input.close();
    }
}
