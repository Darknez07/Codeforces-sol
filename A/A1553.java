import java.util.Scanner;

public class A1553 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            if(n < 9){
                System.out.println(0);
            }else{
                System.out.println((int)Math.ceil((n + 1)/10));
            }
        }
        input.close();
    }
}
