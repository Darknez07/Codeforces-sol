import java.util.Scanner;
// Property of ans = b - a where b > a
// Or else find minimum to reach ans, by a % ans
// with ans - (a % ans);
public class A1543 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t  = input.nextInt();
        long a,b,diff,temp;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            diff = Math.abs(b - a);
            if(a > b){
                temp = a;
                a = b;
                b = temp;
            }
            if(diff == 0){
                System.out.println("0 0");
            }else{
                System.out.println(diff+" "+Math.min( a % diff,diff - (a % diff) ));
            }
        }
        input.close();
    }
}
