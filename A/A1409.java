import java.util.Scanner;

public class A1409 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int a,b,ans;
        while(t--!=0){
            a = input.nextInt();
            b = input.nextInt();
            if(a > b){
                ans = (a-b)/10 ;
                if((a - b) % 10!=0)
                    ans++;

            }else{
                ans = (b-a)/10;
                if((b - a) % 10!=0)
                    ans++;
            }
            System.out.println(ans);
        }
        input.close();
    }
}
