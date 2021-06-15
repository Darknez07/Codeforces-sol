import java.util.Scanner;

public class A1324{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        long parity = 0,a;
        boolean ans;
        while(t--!=0){
            ans = true;
            n = input.nextInt();
            for(int i=0;i<n;i++){
                a = input.nextLong();
                if(i == 0)
                    parity = a % 2;
                else if(parity != a % 2)
                    ans = false;
            }
            if(ans)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}