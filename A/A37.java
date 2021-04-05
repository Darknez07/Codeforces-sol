import java.util.HashMap;
import java.util.Scanner;

public class A37 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int max=Integer.MIN_VALUE,n;
        HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
        while(t--!=0){
            n = input.nextInt();
            if(map.containsKey(n))
                map.put(n, map.get(n) + 1);
            else
                map.put(n,1);
        }
        input.close();
        for(int i: map.values()){
            if(i > max)
                max = i;
        }
        System.out.println(max+" "+map.size());
    }
}
