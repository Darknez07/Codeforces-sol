import java.util.Scanner;

public class A1420 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        boolean done;
        int n;
        long x,last;
        while (t-- != 0) {
            n = input.nextInt();
            last = -1;
            done = false;
            for(int i=0;i<n;i++){
                x = input.nextLong();
                if(i > 0 && x >= last){
                    done = true;
                }
                last = x;
            }
            System.out.println(done ? "YES" : "NO");
        }
        input.close();
    }
}