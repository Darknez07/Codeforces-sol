import java.util.Scanner;

public class A1204 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        input.close();
        int n = s.length();
        int res = (n + 1) / 2;
        int i;
        for(i=1;i<n;i++){
            if(s.charAt(i) == '1')
                break;
        }
        if(n % 2 == 1 && i == n) res--;
        System.out.println(res);
    }
}