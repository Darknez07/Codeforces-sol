import java.util.Scanner;

public class B1283{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b;
        while(t--!=0){
            a = input.nextLong();
            b = input.nextLong();
            a = (a/b)*b + Math.min((b / 2), (a % b));
            System.out.println(a);
        }
        input.close();
    }
}