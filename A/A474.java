import java.util.HashMap;
import java.util.Scanner;

public class A474 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char ch = input.next().charAt(0) =='R'? 'L':'R';
        char[] typed = input.next().toCharArray();
        HashMap<Character,Character> left = new HashMap<Character,Character>();
        HashMap<Character,Character> right = new HashMap<Character,Character>();
        String pre = "qwertyuiop";
        left.put('q','q');
        for(int i=1;i<pre.length();i++){
            left.put(pre.charAt(i), pre.charAt(i - 1));
        }
        for(int i=0;i<pre.length() - 1;i++){
            right.put(pre.charAt(i), pre.charAt(i + 1));
        }
        right.put(pre.charAt(pre.length() - 1),pre.charAt(pre.length() - 1));
        pre = "asdfghjkl;";
        left.put('a','a');
        for(int i=1;i<pre.length();i++){
            left.put(pre.charAt(i), pre.charAt(i - 1));
        }
        for(int i=0;i<pre.length() - 1;i++){
            right.put(pre.charAt(i), pre.charAt(i + 1));
        }
        right.put(pre.charAt(pre.length() - 1),pre.charAt(pre.length() - 1));
        pre = "zxcvbnm,./";
        left.put('z','z');
        for(int i=1;i<pre.length();i++){
            left.put(pre.charAt(i), pre.charAt(i - 1));
        }
        for(int i=0;i<pre.length() - 1;i++){
            right.put(pre.charAt(i), pre.charAt(i + 1));
        }
        right.put(pre.charAt(pre.length() - 1),pre.charAt(pre.length() - 1));
        input.close();
        if(ch == 'L'){
            for(int i=0;i<typed.length;i++)
                typed[i] = left.get(typed[i]);
        }else{
            for(int i=0;i<typed.length;i++)
                typed[i] = right.get(typed[i]);
        }
        System.out.println(String.valueOf(typed));
    }
}
