import java.util.*;
public class A1389 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            if(2*a > b){
                System.out.println(-1+" "+-1);
            }else{
                System.out.println(a+" "+2*a);
            }
        }
        input.close();
    }
}
