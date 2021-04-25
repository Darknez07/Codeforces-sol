import java.util.Scanner;

public class B1360 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,min=Integer.MAX_VALUE;
        while(t--!=0){
            n = input.nextInt();
            min=Integer.MAX_VALUE;
            int[] a = new int[n];
            for(int i=0;i<n;i++)
                a[i] = input.nextInt();
            for(int i=0;i<n;i++)
                for(int j=i+1;j<n;j++)
                    if(min > Math.abs(a[i] - a[j]))
                        min = Math.abs(a[i] - a[j]);
            System.out.println(min);
        }
        input.close();
    }
}
