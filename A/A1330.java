import java.util.Scanner;

public class A1330 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] arr;
        int n,x,p,i;
        while(t--!=0){
            n = input.nextInt();
            x = input.nextInt();
            arr = new int[205];
            for(i=0;i<n;i++){
                p = input.nextInt();
                arr[p] = 1;
            }
            for(i=1;i<205;i++){
                if(arr[i] == 0){
                    if(x == 0)
                        break;
                    x--;
                }
            }
            // if(i + 1 < 102 && arr[i+1] == 1)
            System.out.println(i - 1);
        }
    }
}
