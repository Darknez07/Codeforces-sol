import java.util.Scanner;

public class A1372 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            for(int i=0;i<n;i++){
                System.out.print(1+" ");
            }
            System.out.println();
        }
        input.close();
    }
}
