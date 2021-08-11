import java.util.Scanner;

public class B1445 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,c,d;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            d = input.nextInt();
            System.out.println(Math.max(a+b,c+d));
        }
        input.close();
    }
}
