import java.util.Scanner;

public class A1294 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,c,n,min;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            n = input.nextInt();
            min = Math.max(Math.max(a,b),c);
            if(min == a){
                n-=(-c-b + a + a);
            }else if(min == b){
                n-=(-a-c +b + b);
            }else{
                n-=(-a-b + c + c);
            }
            if(n < 0)
                System.out.println("NO");
            else
                System.out.println(n % 3 == 0 ? "YES": "NO");
        }
        input.close();
    }
}
