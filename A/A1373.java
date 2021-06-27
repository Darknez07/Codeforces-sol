import java.util.Scanner;

public class A1373 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,c;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            if(a >= c)
                System.out.print(-1);
            else
                System.out.print(1);
            System.out.print(" ");
            if((long)a*b > c)
                System.out.print(b);
            else
                System.out.print(-1);
            System.out.println();
        }
        input.close();
    }
}
