import java.util.*;
public class B102 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        int count = 0;
        int sum;
        while(s.length()!= 1) {
            sum = 0;
            for(int i=0; i<s.length(); i++) {
                sum+=(s.charAt(i) - '0');
            }
            s = String.valueOf(sum);
            count++;
        }
        System.out.println(count);
        input.close();
    }
}
