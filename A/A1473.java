import java.util.*;
public class A1473 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int d,n;
        int[] arr;
        boolean ds = false;
        while(t--!=0){
            n = input.nextInt();
            d = input.nextInt();
            arr = new int[n];
            ds = false;
            for(int i=0;i<n;i++){
                arr[i] = input.nextInt();
            }
            Arrays.sort(arr);
            for(int i=0;i<n;i++){
                if(arr[i] > d){
                    ds = true;
                    break;
                }
            }
            if(!ds){
                System.out.println("Yes");
                continue;
            }
            if(arr[0] + arr[1] <= d){
                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
        input.close();
    }
}
