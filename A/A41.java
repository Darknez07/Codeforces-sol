import java.util.Scanner;

public class A41 {
    public static boolean revcheck(String s1, String s2){
        int n = s1.length();
        for(int i=0;i<n;i++)
            if(s1.charAt(i) != s2.charAt(n - 1 - i))
                return false;
        return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s1 = input.next();
        String s2 = input.next();
        if(s1.length()!=s2.length())
            System.out.println("NO");
        else if(revcheck(s1, s2))
            System.out.println("YES");
        else
            System.out.println("NO");
        input.close();
    }
}
