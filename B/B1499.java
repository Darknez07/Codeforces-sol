import java.util.*;
public class B1499{
    public static boolean is_sorted(char[] ch){
        for(int i=1; i<ch.length; i++){
            if(ch[i] < ch[i - 1])
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        char[] s;
        boolean f1,f2;
        int indx;
        while(t--!=0){
            s = input.next().toCharArray();
            f1 = false;
            f2 = false;
            indx = s.length - 1;
            if(is_sorted(s)){
                System.out.println("YES");
                continue;
            }
            for(int i = s.length - 1; i>=1;i--){
                if(s[i] == '0' && s[i - 1] == '0'){
                    f1 = true;
                    indx  = i;
                    break;
                }
            }
            if(!f1){
                System.out.println("YES");
                continue;
            }
            for(int i = indx - 1; i>=1;i--){
                if(s[i] == '1' && s[i - 1] == '1'){
                    f2 = true;
                    break;
                }
            }
            if(f2){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
        input.close();
    }
}