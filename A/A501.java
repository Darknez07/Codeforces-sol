import java.util.Scanner;

public class A501 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        int d = input.nextInt();
        double v1 = Math.max(3*((double)a/10),(double)a - (((double)a/250)*c));
        double v2 = Math.max(3*((double)b/10),(double)b - (((double)b/250)*d));
        if(v1 == v2){
            System.out.println("Tie");
        }else if(v1 < v2){
            System.out.println("Vasya");
        }else{
            System.out.println("Misha");
        }
        input.close();
    }
}
