import java.util.Scanner;

public class A749 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        System.out.println(n/2);
        if(n % 2 == 0){
            for(int i=2;i<=n;i+=2)
                System.out.print(2+" ");
        }else{
            n = n - 3;
            for(int i=2;i<=n;i+=2)
                System.out.print(2+" ");
            System.out.print(3);
        }
        input.close();
    }
}
