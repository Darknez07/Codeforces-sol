import java.util.*;
public class B1351 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a1,a2,b1,b2;
        while(t--!=0){
            a1 = input.nextInt();
            b1 = input.nextInt();
            a2 = input.nextInt();
            b2 = input.nextInt();
            if(a1 == a2 && b2 + b1  == a1){
                System.out.println("Yes");
            }else if(a1 == b2 && a2 + b1 == a1){
                System.out.println("Yes");
            }else if(b1 == b2 && a1 + a2 == b1){
                System.out.println("Yes");
            }else if(b1 == a2 && b2 + a1 == b1){
                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
        input.close();
    }
}
