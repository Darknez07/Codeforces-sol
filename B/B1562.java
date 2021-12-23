import java.util.*;
public class B1562 {
    public static boolean Find_div(int num){
        for(int i=2;i<num;i++){
            if(num % i == 0)
                return true;
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        char[] ch;
        int num, digs;
        boolean dig = false;
        while (t-- != 0) {
            digs = input.nextInt();
            ch = input.next().toCharArray();
            dig = false;
            num = 0;
            for (int i = 0; i < digs; i++) {
                if (ch[i] == '4' || ch[i] == '6' || ch[i] == '9' || ch[i] == '8' || ch[i] == '1') {
                    dig = true;
                    num = ch[i] - '0';
                    break;
                }
            }
            if (dig) {
                System.out.println(1);
                System.out.println(num);
                continue;
            }
            for (int i = 0; i < digs; i++) {
                num = 0;
                for (int j = i + 1; j < digs; j++) {
                    num = Integer.parseInt(ch[i]+""+ch[j]);
                    if(Find_div(num)){
                        dig = true;
                        break;
                    }
                }
                if(dig){
                    break;
                }
            }
            System.out.println(2);
            System.out.println(num);
        }
        input.close();
    }
}
