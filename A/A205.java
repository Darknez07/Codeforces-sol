import java.util.Scanner;

public class A205 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int index = 0,min = Integer.MAX_VALUE;
        int[] a = new int[n];
        for(int i=0;i<n;i++){
            a[i] = input.nextInt();
            if(min > a[i])
                min = a[i];
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if(min == a[i]){
                count++;
                index = i;
            }if(count > 1){
                break;
            }
        }
        if(count > 1){
            System.out.println("Still Rozdil");
        }else{
            System.out.println(index + 1);
        }
        input.close();
    }
}
