import java.util.Scanner;

public class A1472 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int w, h, n, counter = 0, orig;
        while (t-- != 0) {
            w = input.nextInt();
            h = input.nextInt();
            n = input.nextInt();
            counter = 0;
            orig = w * h;
            if (w % 2 == 1 && h % 2 == 1) {
                if (n == 1)
                    System.out.println("YES");
                else
                    System.out.println("NO");
            } else {
                while ((w % 2 == 0 || h % 2 == 0) && n > counter) {
                    if (w % 2 == 0) {
                        w /= 2;
                    } else if (h % 2 == 0) {
                        h /= 2;
                    }
                    counter = orig / (w * h);
                }
                if(counter >= n){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }
        }
        input.close();
    }
}
