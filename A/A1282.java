import java.util.Scanner;

public class A1282 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,c,r,temp;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            r = input.nextInt();
            if(a > b){
                temp = a;
                a = b;
                b = temp;
            }
            // Idhar se udhar
            System.out.println(b - a - Math.max(Math.min(c + r, b) - Math.max(c - r, a), 0));
        }
        input.close();
    }
}
