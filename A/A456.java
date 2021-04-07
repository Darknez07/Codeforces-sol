import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class A456{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        boolean alex = false;
        if(n == 1)
            System.out.println("Poor Alex");
        else{
            for(int i=0;i<n;i++){
                map.put(input.nextInt(), input.nextInt());
            }
            alex = false;
            ArrayList<Integer> lst = new ArrayList<Integer>(map.values());
            for(int i=0;i<lst.size() - 1;i++){
                if(lst.get(i) > lst.get(i+1)){
                    alex = true;
                }
            }
            if(alex){
                System.out.println("Happy Alex");
            }else{
                System.out.println("Poor Alex");
            }
        }
        input.close();
    }
}