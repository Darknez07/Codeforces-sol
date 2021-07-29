import java.util.Scanner;

public class A1512 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,j;
        int[] a;
        while(t--!=0){
            a = new int[101];
            n = input.nextInt();
            for(int i=0;i<n;i++){
                j = input.nextInt();
                if(a[j] == 0)
                    a[j] = i + 1;
                else
                    a[j] = -1;
            }
            for(int i=0;i<101;i++)
                if(a[i]!= -1 && a[i]!= 0)
                    System.out.println(a[i]);
        }
        input.close();
    }
}
