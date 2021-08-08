import java.util.Scanner;

public class B999 {
    public static String reverse(String orig, int end){
        char[] s = orig.toCharArray();
        final int n = end;
        final int halfLength = n / 2;
        for (int i=0; i<halfLength; i++)
        {
            char temp = s[i];
            s[i] = s[n-1-i];
            s[n-1-i] = temp;
        }
        return new String(s);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
        for(int p=2;p<=n;p++){
            if(n % p > 0){continue;}
            s = reverse(s,p);
        }
        System.out.println(s);
        input.close();
    }
}
