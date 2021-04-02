import java.util.Scanner;

public class A131 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] s = input.next().toCharArray();
        input.close();
        String ans = "";
        int uppercase = 1;
        while (uppercase < s.length && Character.isUpperCase(s[uppercase]))
            uppercase++;
        if (uppercase == s.length) {
            uppercase = 1;
            if (Character.isUpperCase(s[uppercase - 1]))
                ans += Character.toLowerCase(s[uppercase - 1]);
            else
                ans += Character.toUpperCase(s[uppercase - 1]);
            while (uppercase < s.length)
                ans += Character.toLowerCase(s[uppercase++]);
        } else {
            uppercase = 0;
            while (uppercase < s.length)
                ans += s[uppercase++];
        }
        System.out.println(ans);
    }
}
