import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
public class A1057 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int routers = input.nextInt();
        int[] arr = new int[routers + 1];
        arr[0] = 0;
        arr[1] = 0;
        for(int i=2;i<=routers;i++) {
            // We are storing the parents;
            arr[i] = input.nextInt();
        }
        ArrayList<Integer> lst = new ArrayList<Integer>();
        int n = routers;
        while(n!=0){
            lst.add(n);
            n = arr[n];
        }
        Collections.reverse(lst);
        for(Integer i: lst){
            System.out.print(i+" ");
        }
        input.close();
    }
}

