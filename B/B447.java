import java.util.HashMap;
import java.util.Scanner;

public class B447 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String x = input.next();
        int k = input.nextInt();
        HashMap<Character, Integer> lst = new HashMap<Character, Integer>();
        for(int i=0;i<26;i++){
            lst.put((char) (i+'a'),input.nextInt());
        }
        input.close();
        int max = -1;
        int p;
        for(int i=0;i<26;i++){
            p = lst.get((char)(i+'a'));
            if(p > max)
               max = p;
        }
        int sum = 0;
        int len = k + x.length();
        for(int i= x.length();i<len;i++){
            sum+=(max*(i+1));
        }
        for(int i=0;i<x.length();i++){
            sum+=((i+1)*lst.get(x.charAt(i)));
        }
        System.out.println(sum);
    }
}
