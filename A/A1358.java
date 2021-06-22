import java.util.Scanner;

public class A1358 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            a*=b;
            System.out.println(a/2 + (a%2 == 0 ? 0: 1));
        }
        input.close();
    }
}
