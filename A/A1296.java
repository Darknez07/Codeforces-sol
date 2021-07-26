import java.util.Scanner;

public class A1296 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int[] a;
        while(t--!=0){
            a = new int[2];
            n = input.nextInt();
            for(int i=0;i<n;i++){
                a[input.nextInt() % 2]++;
            }
            if((n == a[1] && n % 2 == 0) || a[1] == 0){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
        input.close();
    }
}
