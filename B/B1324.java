import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;

public class B1324 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long n;
        boolean res;
        while(t--!=0){
            res = false;
            n = input.nextLong();
            ArrayList<Long> lst = new ArrayList<Long>();
            for(long i=0;i<n;i++){
                lst.add(input.nextLong());
            }
            HashSet<Long> hs = new HashSet<Long>();
            for(int i=0;i+1<n;i++){
                if(Collections.frequency(hs, lst.get(i + 1))!=0){res=true;break;}
                hs.add(lst.get(i));
            }
            if(res)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        input.close();
    }
}
