import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;

public class A1251 {
    public static void main(String[] args) throws IOException {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- != 0) {
            HashSet<Character> lst = new HashSet<Character>();
            String s = input.next();
            char ch[] = s.toCharArray();
            if (ch.length == 1)
                System.out.println(ch[0]);
            else {
                char prev = ch[0];
                int count = 1;
                for (int i = 1; i < ch.length; i++) {
                    if (prev == ch[i]) {
                        count++;
                    } else {
                        if (count % 2 != 0) {
                            lst.add(prev);
                        }
                        prev = ch[i];
                        if(i == ch.length - 1)
                            lst.add(ch[i]);
                        count = 1;
                    }
                }
                if(count % 2 != 0)
                    lst.add(prev);
                ArrayList<Character> ls = new ArrayList<Character>(lst);
                Collections.sort(ls);
                for (char c : ls) {
                    System.out.print(c);
                }
                if (t != 0)
                    System.out.println();
            }
        }
        input.close();
    }
}
