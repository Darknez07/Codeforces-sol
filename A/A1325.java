import java.util.Scanner;

public class A1325 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            System.out.println(1+" "+(n - 1));
        }
        input.close();
    }
}
