import java.util.HashMap;
import java.util.Scanner;

public class C1335 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- != 0) {
            int max = -1, n, f;
            HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
            n = input.nextInt();
            while (n-- != 0) {
                f = input.nextInt();
                if (map.containsKey(f)) {
                    map.put(f, map.get(f) + 1);
                } else {
                    map.put(f, 1);
                }
                if(max < map.get(f)) {
                    max = map.get(f);
                }
            }
            if(max == map.size()) {System.out.println(max-1);}
            else{System.out.println((max > map.size()) ? map.size() : max);}
        }
        input.close();
    }
}
