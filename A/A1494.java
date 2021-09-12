import java.util.Scanner;
import java.util.Stack;

public class A1494{
    public static boolean CheckParan(char[] ch){
        Stack<Character> stack = new Stack<Character>();
        for(int i=0; i<ch.length; i++){
            if(ch[i] == '(')
                stack.push(ch[i]);
            else{
                if(stack.empty())
                    return false;
                stack.pop();
            }
        }
        return (stack.empty());
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int l;
        char[] ch,ked;
        while(t--!=0){
            ch = input.next().toCharArray();
            l = ch.length;
            if(ch[0]==ch[l-1])
            {
                System.out.println("NO");
                continue;
            }
            char x;
            char f=ch[0];
            char la=ch[l-1];
            if ((ch[0] == 'B' || ch[l - 1] == 'B') && (ch[0] == 'A' || ch[l - 1] == 'A'))
            {
                x='C';
            }
            else if ((ch[0] == 'A' || ch[l - 1] == 'A') && (ch[0] == 'C' || ch[l - 1] == 'C'))
            {
                x = 'B';
            }
            else
            {
                x='A';
            }
            String fk = String.valueOf(ch);
            ked = fk.toCharArray();
            for(int i=0;i<ch.length;i++){
                if(ch[i]==f)
                {
                    ch[i]='(';
                    ked[i]='(';
                }
                if (ch[i] == la)
                {
                    ch[i] = ')';
                    ked[i] = ')';
                }
                if (ch[i] == x)
                {
                    ch[i] = '(';
                    ked[i] = ')';
                }
            }
            if(CheckParan(ch)){
                System.out.println("YES");
                continue;
            }
            if(CheckParan(ked)){
                System.out.println("YES");
                continue;
            }
            System.out.println("NO");
        }
        input.close();
    }
}