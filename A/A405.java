import java.util.Arrays;
import java.util.Scanner;

public class A405 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        for(int i=0;i<n;i++){
            array[i] = input.nextInt();
        }
        input.close();
        Arrays.sort(array);
        for(int i=0;i<n;i++){
            System.out.print(array[i]+" ");
        }
    }
}
