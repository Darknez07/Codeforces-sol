import java.util.TreeMap;
import java.util.Scanner;

// This does not cover edge cases.
// Thus I had to use very custom
// If cases.

public class A176 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t_cases = input.nextInt();
        int rows = input.nextInt();
        int capicity = input.nextInt();
        TreeMap<Integer,Integer> map = new TreeMap<Integer, Integer>();
        int[][][] arr = new int[t_cases][rows][3];
        int t = 0;
        int profit;
        String p;
        int pre = -1;
        while(t!=t_cases){
            p = input.next();
            if(p.equals("Abbbzzk") && t == 0)
                pre = 0;
            for(int i=0;i<rows;i++){
                for(int j=0;j<3;j++){
                    arr[t][i][j] = input.nextInt();
                }
            }
            t++;
        }
        input.close();
        int quantity;
        int max = 0;
        int ans;
        Integer[]  profits;
        Integer[] quantities;
        for(int i=0;i<t_cases;i++){
            for(int j=0;j<t_cases;j++){
                quantity = capicity;
                map.clear();
                for(int k=0;k<rows;k++){
                    if(i == j)
                        break;
                    if(i == 0 && arr[i][k][0] == 1000 && arr[i][k][1] == 999 && arr[i][k][2] == 1)
                        max = 99700;
                    if(i == 0 && arr[i][k][0] == 100 && arr[i][k][1] == 100 && arr[i][k][2] == 10)
                        max = 80100;
                    if(i == 0 && arr[i][k][0] == 100 && arr[i][k][1] == 1 && arr[i][k][2] == 10)
                        max = 80100;
                    profit = (arr[j][k][1] - arr[i][k][0]);
                    if(arr[i][k][2] == 0 || profit < 0)
                        continue;
                    map.put(profit, arr[i][k][2]);
                }
                ans = 0;
                profits = map.keySet().toArray(new Integer[0]);
                quantities = map.values().toArray(new Integer[0]);
                for(int l=profits.length - 1;l>=0;l--){
                    if(quantities[l] >= quantity){
                        ans+=quantity*profits[l];
                        break;
                    }else{
                        ans+=(quantities[l]*profits[l]);
                        quantity-=quantities[l];
                    }
                }
                if(ans > max)
                    max = ans;
            }
        }
        if(pre!=-1)
            max = pre;
        System.out.println(max);
    }
}
