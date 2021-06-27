import java.util.Scanner;

public class A1380{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int i,n;
        boolean f;
        long[] arr;
        while(t--!=0){
            n = input.nextInt();
            arr = new long[n];
            for(int l=0;l<n;l++){
                arr[l] = input.nextLong();
            }
            f = false;
            for(i=1;i<n-1;i++){
                if(arr[i] > arr[i - 1] && arr[i + 1] < arr[i]){
                    f = true;
                    break;
                }
            }
            if(f){
                System.out.println("YES");
                System.out.println(i+" "+(i+1)+" "+(i+2));
            }else{
                System.out.println("NO");
            }
        }
    }
}