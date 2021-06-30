import java.util.Scanner;

public class A913 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        if(n >= 30){
            System.out.println(m);
        }else{
            System.out.println((int)(m % Math.pow(2,n)));
        }
        input.close();
    }
}
