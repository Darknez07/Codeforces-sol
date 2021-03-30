import java.util.HashMap;
import java.util.Scanner;

public class B499 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        HashMap<String,String> lst = new HashMap<String,String>();
        int n =input.nextInt();
        int m = input.nextInt();
        String first,second;
        for(int i=0;i<m;i++){
            first = input.next();
            second = input.next();
            if(first.length() > second.length()){
                lst.put(first, second);
            }else{
                lst.put(second, first);
            }
        }
        second = "";
        for(int i=0;i<n;i++){
            first = input.next();
            if(lst.containsKey(first))
                first = lst.get(first);
            second+=(first+" ");
        }
        System.out.println(second);
        input.close();
    }
}
