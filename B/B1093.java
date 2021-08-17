import java.util.Scanner;
import java.util.Arrays;

public class B1093 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] ch;
        int counter;
        String s;
        char[] ck;
        while(t--!=0){
            s = input.next();
            ch = new int[26];
            for(int i=0;i<s.length();i++){
                ch[s.charAt(i) - 'a']++;
            }
            counter = 0;
            for(int i=0;i<26;i++){
                if(ch[i]!=0){
                    counter++;
                }
            }
            if(counter == 1){
                System.out.println(-1);
            }else{
                ck = s.toCharArray();
                Arrays.sort(ck);
                s = String.valueOf(ck);
                System.out.println(s);
            }
        }
        input.close();
    }
}
