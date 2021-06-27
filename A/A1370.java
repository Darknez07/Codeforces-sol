import java.util.Scanner;

public class A1370 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            System.out.println(n/2);
        }
        input.close();
    }
}
