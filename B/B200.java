import java.util.Scanner;

public class B200 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        double total = 0;
        int n = t;
        while(t--!=0){
            total+=input.nextInt();
        }
        input.close();
        double s = total/n;
        System.out.println(String.format("%3.12f",s));
    }
}
