import java.util.Scanner;

public class A1110 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        int n = input.nextInt();
        int[] a = new int[n];
        int[] par = new int[2];
        for(int i=0;i<n;i++){
            a[i] = input.nextInt();
            par[a[i] % 2]++;
        }
        if(k % 2 == 0 && a[n - 1] % 2 == 0 ){
            System.out.println("even");
        }else if(k % 2 == 0 && a[n - 1] % 2 == 1){
            System.out.println("odd");
        }else if(k % 2 == 1 && par[1] % 2 == 0){
            System.out.println("even");
        }else if(k % 2 == 1 && par[1] % 2 == 1){
            System.out.println("odd");
        }
        input.close();
    }
}
