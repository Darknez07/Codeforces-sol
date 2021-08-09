import java.util.Scanner;

public class A1208 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b,n, save;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            n = input.nextInt();
            if(n == 0){
                System.out.println(a);
                continue;
            }else if(n == 1){
                System.out.println(b);
                continue;
            }
            save = a ^ b;
            if((n + 1) %  3 == 0){
                System.out.println(save);
            }else if((n + 1) % 3 == 1){
                System.out.println(a);
            }else{
                System.out.println(b);
            }
        }
        input.close();
    }
}
