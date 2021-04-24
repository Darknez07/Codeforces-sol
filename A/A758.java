import java.util.Scanner;

public class A758 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] arr = new int[t];
        int max = -1,total = 0;
        for(int i=0;i<t;i++){
            arr[i] = input.nextInt();
            if(max < arr[i]){
                max = arr[i];
            }
        }
        for(int i=0;i<t;i++){
            total+=(max - arr[i]);
        }
        System.out.println(total);
        input.close();
    }
}
