import java.util.Scanner;

public class A581{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        input.close();
        if(a < b){
            System.out.print(a+" "+((b - a)/2));
        }else{
            System.out.print(b+" "+((a - b)/2));
        }
    }
}