import java.util.Scanner;

public class A1256 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,n,S,r;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            n = input.nextInt();
            S = input.nextInt();
            r = S/n;
            if(a > r){
                S-=(r*n);
            }else{
                S-=(a*n);
            }
            if(b >= S){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}
