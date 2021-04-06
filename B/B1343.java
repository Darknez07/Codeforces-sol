import java.util.Scanner;

public class B1343 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,s,reduced,j;
        while(t--!=0){
            n = input.nextInt();
            s = 1;
            if(n % 4 !=0){
                System.out.println("NO");
                continue;
            }
            j=0;
            int[] arr = new int[n];
            reduced = n / 2;
            reduced*=(reduced+1);
            for(int i=2;i<=n;i+=2){
                arr[j++] = i;
            }
            for(int i=0;i<n/2 - 1;i++){
                reduced-=s;
                arr[j++] = s;
                s+=2;
            }
            if(reduced % 2 == 1){
                arr[j++] = reduced;
                System.out.println("YES");
                for(int i=0;i<n;i++)
                    System.out.print(arr[i]+" ");
            }
            System.out.println();
        }
        input.close();
    }
}