import java.util.HashSet;
import java.util.Scanner;

public class A1520 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        String m;
        int l;
        boolean yes;
        HashSet<Character> seen = new HashSet<Character>();
        while(t--!=0){
            yes = false;
            seen.clear();
            l = input.nextInt();
            m = input.next();
            for(int i=0;i<l-1;i++){
                if(m.charAt(i) == m.charAt(i + 1)){
                    continue;
                }else{
                    if(!seen.add(m.charAt(i))){
                        yes = true;
                        break;
                    }
                }
            }
            if(!seen.add(m.charAt(l - 1))){
                yes = true;
            }
            if(yes){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
    }
}
