import java.util.Scanner;
import java.util.*;
public class A441{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int cost = input.nextInt();
        int[][] a = new int[t][];
        for(int i=0; i<t; i++) {
            a[i] = new int[input.nextInt()];
            for(int j=0;j<a[i].length;j++) {
                a[i][j] = input.nextInt();
            }
        }
        ArrayList<Integer> result = new ArrayList<Integer>();
        for(int i=0;i<t;i++){
            Arrays.sort(a[i]);
            if(cost > a[i][0])
                result.add(i + 1);
        }
        System.out.println(result.size());
        for(int i=0;i<result.size();i++){
            System.out.print(result.get(i)+" ");
        }
        input.close();
    }
}