import java.util.Scanner;

public class A1225 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        if(a - b == 0){
            System.out.print(a);
            System.out.print(1);
            System.out.print(" ");
            System.out.print(b);
            System.out.print(2);
        }else if(b - a == 1){
            System.out.print(a);
            System.out.print(9);
            System.out.print(" ");
            System.out.print(b);
            System.out.print(0);
        }else if(a == 9 && b == 1){
            System.out.print(9+" "+10);
        }else{
            System.out.print(-1);
        }
        input.close();
    }
}
