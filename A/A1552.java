import java.util.Arrays;
import java.util.Scanner;
// Khatam tata bye bye
// Ek dum just count disarragments
public class A1552 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int len,count = 0;
        char[] ch;
        String s;
        while(t--!=0){
            len = input.nextInt();
            count = 0;
            ch = input.next().toCharArray();
            s = String.valueOf(ch);
            Arrays.sort(ch);
            for(int i=0;i<len;i++){
                if(ch[i] != s.charAt(i))
                    count++;
            }
            System.out.println(count);
        }
        input.close();
    }
}
