import java.util.Scanner;

public class B1293 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        double new_n = (double) n;
        double x = 0;
        while(--n!=0){
            x+=(1/new_n);
            new_n--;
        }
        x+=1.0;
        input.close();
        System.out.println(x);
    }
}
