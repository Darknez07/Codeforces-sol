import java.util.Scanner;

public class A1187 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,s,toys;
        while(t--!=0){
            n = input.nextInt();
            s = input.nextInt();
            toys = input.nextInt();
            // Maximum number of times we don't get either toys or stickers
            // + 1 for the last try getting both
            System.out.println(Math.max((n - s),(n - toys)) + 1);
        }
        input.close();
    }
}
