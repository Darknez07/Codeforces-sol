import java.util.*;
public class A731 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int n;
        long sum = 0;
        char ch = 'a';
        for(int i=0;i<s.length();i++){
            n = s.charAt(i) - ch;
            if(n < 0){
                n = 26 + n;
            }
            sum+=((long)Math.min(n, 26 - n));
            ch = s.charAt(i);
        }
        System.out.println(sum);
        input.close();
    }
}
