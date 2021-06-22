import java.util.Scanner;

public class A1353 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t =input.nextInt();
        int a,b;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            if(a == 1)
                System.out.println(0);
            else if(a == 2)
                System.out.println(b);
            else
                System.out.println(2*b);
        }
        input.close();
    }
}
