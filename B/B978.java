import java.util.*;
public class B978 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int len = input.nextInt();
        char[] ch = input.next().toCharArray();
        input.close();
        int count = 0;
        for(int i=2; i<len; i++) {
            if(ch[i - 1] == 'x' && ch[i - 2] == 'x' && ch[i] == 'x')
                count++;
        }
        System.out.println(count);
    }
}
