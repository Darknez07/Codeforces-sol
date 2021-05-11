import java.util.HashMap;
import java.util.Scanner;

public class D1520 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long counter = 0,n;
        long[] arr;
        while(t--!=0){
            n = input.nextLong();
            arr = new long[(int)n];
            HashMap<Long, Long> map =new HashMap<Long, Long>();
            counter = 0;
            for(long i=0;i<n;i++){
                arr[(int)i] = input.nextInt();
                if(map.containsKey((arr[(int)i] - i)))
                    map.put((arr[(int)i] - i), map.get(arr[(int)i] - i) + 1);
                else
                    map.put((arr[(int)i] - i), (long)1);
            }
            long mid;
            for(long x: map.keySet()){
                mid = map.get(x);
                mid*=(mid - 1);
                mid/=2;
                counter+=mid;
            }
            System.out.println(counter);
        }
        input.close();
    }
}
