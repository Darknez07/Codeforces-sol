import java.util.Scanner;

public class A1426{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,x;
        while(t--!=0){
            n = input.nextInt();
            x = input.nextInt();
            if(n <= 2){
                System.out.println(1);
            }else{
                System.out.println(((n - 2)/x + 1)+((n-2) % x == 0 ? 0: 1));
            }
        }
        input.close();
    }
}