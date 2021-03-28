import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class A43 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        HashMap<String, Integer> lst = new HashMap<String, Integer>();
        int n_teams = input.nextInt();
        String f;
        while(n_teams--!=0){
            f = input.next();
            if(lst.containsKey(f))
                lst.replace(f,lst.get(f),lst.get(f) + 1);
            else
                lst.put(f, 1);
        }
        input.close();
        f = "";
        int ans = Collections.max(lst.values());
        for(String p: lst.keySet()){
            if(lst.get(p) == ans){
                f = p;
                break;
            }
        }
        System.out.println(f);
    }
}
