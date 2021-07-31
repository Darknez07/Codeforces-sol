import java.util.HashSet;
import java.util.Scanner;

public class B1325 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        HashSet<Integer> set = new HashSet<Integer>();
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            for(int i=0; i<n; i++){
                set.add(input.nextInt());
            }
            System.out.println(set.size());
            set.clear();
        }
        input.close();
    }
}
