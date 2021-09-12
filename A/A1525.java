import java.util.Scanner;

public class A1525 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int k;
        while(t--!=0){
            k = input.nextInt();
            if( k < 10){
                System.out.println(100);
            }else if(100  % k  == 0){
                System.out.println(100/k);
            }else{
                System.out.println(100);
            }
        }
        input.close();
    }
}
