import java.util.Scanner;
// Not completed
public class A1341 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,c,d,n;
        while(t--!=0){
            n = input.nextInt();
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            d = input.nextInt();
            if(n*(a - b) > c + d || n*(a + b) < c - d)
                System.out.println("No");
            else
                System.out.println("Yes");
        }
        input.close();
    }
}
