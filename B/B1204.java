import java.util.Scanner;

public class B1204 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n,l,r;
        n = input.nextInt();
        l = input.nextInt();
        r = input.nextInt();
        System.out.println((long)((n-l+1)+ 2*(Math.pow(2,l-1) - 1))+" "+(long)(Math.pow(2, r) - 1 + (Math.pow(2, r - 1)*(n - r))));
        input.close();
    }
}
