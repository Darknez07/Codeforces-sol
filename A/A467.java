import java.util.Scanner;

public class A467 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int in,out;
        int count = 0;
        while(n--!=0){
            in = input.nextInt();
            out = input.nextInt();
            if(out - in >= 2)
                count++;
        }
        System.out.println(count);
        input.close();
    }
}
