import java.util.Scanner;

public class B1472 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int[] a;
        while(t--!=0){
            n = input.nextInt();
            a = new int[3];
            for(int i=0;i<n;i++){
                a[input.nextInt()]++;
            }
            if(a[1] % 2 == 1){
                System.out.println("NO");
            }else{
                if(a[2] % 2 == 1 && a[1] == 0)
                    System.out.println("NO");
                else
                    System.out.println("YES");
            }
        }
        input.close();
    }
}
