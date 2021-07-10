import java.util.Scanner;

public class A1326 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            if(n == 1){
                System.out.println(-1);
                continue;
            }
            System.out.print(2);
            for(int i=1;i<n;i++)
                System.out.print(3);
            System.out.println();
        }
        input.close();
    }
}