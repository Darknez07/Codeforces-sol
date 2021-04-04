import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
public class B1312 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        ArrayList<Integer> list = new ArrayList<Integer>();
        while (t-- != 0) {
            n = input.nextInt();
            for (int i = 0; i < n; i++) {
                list.add(input.nextInt());
            }
            Collections.sort(list, new Sort());
            for(int i = 0; i < n; i++) {
                System.out.print(list.get(i)+" ");
            }
            System.out.println();
            list.clear();
        }
        input.close();
    }
}
class Sort implements Comparator<Integer>{
    public int compare(Integer a, Integer b){
        return b - a;
    }
}