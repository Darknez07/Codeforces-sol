import java.util.Scanner;

public class A1374 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,c,mid,ans;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            c = input.nextInt();
            if( c % a == b)
                System.out.println(c);
            else{
                mid = c - (c % a);
                ans = (mid+b);
                if(ans >  c)
                    System.out.println(mid - a + b);
                else
                    System.out.println(ans);
            }
        }
        input.close();
    }
}
