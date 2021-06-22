import java.util.Scanner;

public class A1354 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long a,b,c,d,l;
        while(t--!=0){
            a= input.nextLong();
            b= input.nextLong();
            c= input.nextLong();
            d= input.nextLong();
            if(d >= c && a > b)
                System.out.println(-1);
            else{
                if(b >= a)
                    System.out.println(b);
                else{
                    a-=b;
                    l = b;
                    b = (c - d);
                    if(a % b == 0)
                        b = a/b;
                    else
                        b = a/b + 1;
                    System.out.println(b*c + l);
                }
            }
        }
        input.close();
    }
}
