import java.util.Scanner;

public class A334 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int start = 1;
        int end = t*t;
        input.close();
        while(end > start){
            if((start - 1) % 3 == 0 && start!=1){
                System.out.println();
            }
            System.out.print(start+" "+end+" ");
            start++;
            end--;
        }
    }
}
