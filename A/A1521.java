import java.util.Scanner;

public class A1521 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            if(b < 2 || a == 0)
                System.out.println("NO");
            else if(b == 2)
                System.out.println("YES\n"+a+" "+3*a+" "+(2*a*b));
            else
                System.out.println("YES\n"+a+" "+(b - 1)*a +" "+(a*b));
        }
        input.close();
    }
}
