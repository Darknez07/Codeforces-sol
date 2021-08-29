import java.util.*;
public class A233 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.close();
        if(n % 2 == 1){
            System.out.println(-1);
            return;
        }
        for(int i=1;i<=n;i+=2){
            System.out.print((i+1)+" "+i+" ");
        }

    }
}
