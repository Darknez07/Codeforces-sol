import java.util.Scanner;

public class A935 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.close();
        int counter = 0;
        for(int i=1;i<=n/2;i++){
            if(n  % i == 0)
                counter++;
        }
        System.out.println(counter);
    }
}
