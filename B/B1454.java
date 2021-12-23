import java.util.*;
public class B1454 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int val,n,ans;
        TreeMap<Integer, Integer> map = new TreeMap<Integer, Integer>();
        int[] arr;
        while(t--!=0){
            n = input.nextInt();
            ans = -1;
            arr = new int[n];
            for(int i=0;i<n;i++){
                val = input.nextInt();
                arr[i] = val;
                if(map.containsKey(val)){
                    map.put(val, map.get(val) + 1);
                }else{
                    map.put(val, 1);
                }
            }
            for(Integer key: map.keySet()){
                if(map.get(key) == 1){
                    ans = key;
                    break;
                }
            }
            map.clear();
            if(ans == -1){
                System.out.println(-1);
                continue;
            }
            for(int i=0;i<n;i++){
                if(ans == arr[i]){
                    ans = i + 1;
                    break;
                }
            }
            System.out.println(ans);
        }
        input.close();
    }
}
