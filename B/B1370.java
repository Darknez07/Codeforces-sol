import java.util.ArrayList;
import java.util.Scanner;

public class B1370 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int[] arr;
        while(t--!=0){
            n = input.nextInt();
            arr = new int[2*n];
            ArrayList<Integer> right = new ArrayList<Integer>();
            ArrayList<Integer> left = new ArrayList<Integer>();
            for(int i=0; i<2*n; i++){
                arr[i] = input.nextInt();
                if(arr[i] % 2 == 0){
                    left.add(i+1);
                }else{
                    right.add(i+1);
                }
            }
            if(right.size() % 2 == 1){
                right.remove(right.size() - 1);
                left.remove(left.size() - 1);
            }else if(right.size()!=0){
                right.remove(right.size() - 1);
                right.remove(right.size() - 1);
            }else{
                left.remove(left.size() - 1);
                left.remove(left.size() - 1);
            }
            for(int i=0; i<right.size(); i+=2){System.out.print(right.get(i)+" "+right.get(i + 1)+"\n");}
            for(int i=0; i<left.size(); i+=2){System.out.print(left.get(i)+" "+left.get(i + 1)+"\n");}
            // System.out.println();
        }
        input.close();
    }
}
