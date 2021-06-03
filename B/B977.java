import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;

public class B977 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int l = input.nextInt();
        HashSet<String> st = new HashSet<String>();
        ArrayList<String> lst = new ArrayList<String>();
        String s = input.next();
        String p="";
        input.close();
        for(int i=0;i<l - 1;i++){
            p = s.substring(i,i+2);
            st.add(p);
            lst.add(p);
        }
        int max = -1;
        int occur;
        for(String sn: st){
            occur = Collections.frequency(lst, sn);
            if(occur > max){
                max = occur;
                p = sn;
            }
        }
        System.out.println(p);
    }
}
