import java.util.Arrays;
import java.util.Scanner;
public class A6 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] a = new int[4];
        for(int i=0;i<4;i++){
            a[i] = input.nextInt();
        }
        Arrays.sort(a);
        int degen = 0;
        for(int i=3;i>=2;i--){
            if(a[i - 2] + a[i - 1] > a[i]){
                degen = 3;
                break;
            }else if(a[i - 2] + a[i - 1] == a[i]){
                degen++;
            }
        }
        if(degen == 3){
            System.out.println("TRIANGLE");
        }else if(degen >= 1){
            System.out.println("SEGMENT");
        }else{
            System.out.println("IMPOSSIBLE");
        }
        input.close();
    }
}
