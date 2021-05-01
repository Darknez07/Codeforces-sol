import java.util.Scanner;

public class B1385 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,mid,j;
        while(t--!=0){
            n = input.nextInt();
            boolean[] a = new boolean[n+1];
            int[] arr = new int[n];
            j = 0;
            for(int i=0; i<2*n; i++){
                mid = input.nextInt();
                if(a[mid])
                    arr[j++] = mid;
                else
                    a[mid] = true;
            }
            for(int i=0; i<n; i++){
                System.out.print(arr[i]+" ");
            }
            System.out.println();
        }
        input.close();
    }
}
