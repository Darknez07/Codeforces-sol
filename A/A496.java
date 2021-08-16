import java.util.ArrayList;
import java.util.Scanner;

public class A496 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        ArrayList<Integer> a = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            a.add(input.nextInt());
        }
        int rm;
        int max;
        int min = 2000;
        for(int i=1;i<n-1;i++){
            rm = a.remove(i);
            max = -1;
            for(int j=0;j<a.size()-1;j++){
                max = Math.max(max,(a.get(j + 1) - a.get(j)));
            }
            a.add(i, rm);
            min = Math.min(max, min);
        }
        System.out.println(min);
        input.close();
    }
}
