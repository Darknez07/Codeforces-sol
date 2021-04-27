import java.util.HashSet;
import java.util.Scanner;

public class C1462 {
    static HashSet<Integer> set;
    public static int Find(int n){
        int i;
        if(n == 0)
            return 0;
        for(i=9;i>=1;i--){
            if(n >= i && !set.contains(i))
                break;
        }
        set.add(i);
        if(set.size() == 9)
            return -1;
        return Find(n - i);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,out;
        while(t--!=0){
            n = input.nextInt();
            set = new HashSet<Integer>();
            out = Find(n);
            if(out != -1){
                for(int x: set){
                    System.out.print(x);
                }
            }else{
                if(n == 45){
                    for(int x: set){
                        System.out.print(x);
                    }
                }else{
                    System.out.print(-1);
                }
            }
            System.out.println();
        }
        input.close();
    }
}
