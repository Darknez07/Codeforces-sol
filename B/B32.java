import java.util.*;
public class B32{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] ch = input.next().toCharArray();
        String s = "";
        for(int i=0;i<ch.length;i++){
            if(ch[i] == '-'){
                if(ch[i + 1] == '.'){
                    s+='1';
                }else{
                    s+='2';
                }
                i++;
            }else{
                s+='0';
            }
        }
        System.out.println(s);
        input.close();
    }
}