import java.util.Scanner;

public class A1496 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,k,i;
        String str;
        while(t--!=0){
            n = input.nextInt();
            k = input.nextInt();
            str = input.next();
            if(2*k + 1 > n){
                System.out.println("NO");
                continue;
            }
            i = 0;
            while(str.charAt(i) == str.charAt(n - i - 1)){
                if(k == 0)
                    break;
                k--;
                i++;
            }
            if(k == 0){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        input.close();
    }
}
