import java.util.Scanner;

public class A1359 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int r,g,b,w;
        while(t--!=0){
            r = input.nextInt();
            g = input.nextInt();
            b = input.nextInt();
            w = input.nextInt();
            if(r == 0 && g == 1 && b == 1 && w == 1){
                System.out.println("No");
            }else if(r == 1 && g == 0 && b == 1 && w == 1){
                System.out.println("No");
            }else if(r == 1 && g == 1 && b == 0 && w == 1){
                System.out.println("No");
            }else if(g == 0 && r % 2 == 1 && b % 2 == 1 && w % 2 == 1){
                System.out.println("No");
            }
            else if(r % 2 == 1 && g % 2 == 1 && b % 2 == 1){
                System.out.println("Yes");
            }else if(r % 2 == 0 && g % 2 == 0 && b % 2 == 0){
                System.out.println("Yes");
            }else if(r % 2 != g % 2 && b % 2 == w % 2){
                System.out.println("Yes");
            }else if(r % 2 == g % 2 && b % 2 != w % 2 && b!=0){
                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
        input.close();
    }
}
