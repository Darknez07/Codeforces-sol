import java.util.Scanner;

public class A1369{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            // Chaar kone honge tabhi maaza aayga
            if(n % 4 == 0)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}