import java.util.*;
public class C1560 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,s1,s2,st,ct;
        while(t--!=0){
            n = input.nextInt();
            st = 1;
            ct =1;
            while(st < n){
                ct++;
                st = ct*ct;
            }
            s1 = st;
            s2 = ((ct - 1)*(ct - 1) + 1);
            s1 = Math.abs(n - s1) + 1;
            s2 = Math.abs(n - s2) + 1;
            if(s1 > s2){
                System.out.println(s2+" "+ct);
            }else{
                System.out.println(ct+" "+s1);
            }
        }
        input.close();
    }
}
