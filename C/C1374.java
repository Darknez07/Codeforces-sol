import java.util.Scanner;
import java.util.Stack;
// Surprsingly correct
public class C1374 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        String l;
        while (t-- != 0) {
            n = input.nextInt();
            l = input.next();
            Stack<Character> stck = new Stack<Character>();
            for (int i = 0; i < n; i++) {
                if (l.charAt(i) == '(')
                    stck.push(l.charAt(i));
                else if (l.charAt(i) == ')')
                    if (!stck.isEmpty())
                        stck.pop();
            }
            System.out.println(stck.size());
        }
        input.close();
    }
}
