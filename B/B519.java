import java.util.Scanner;

public class B519 {
    static int max = 100000001;
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int arr[] = new int[max];
        int arr2[] = new int[max];
        int ans = 0;
        int n= input.nextInt();
        for(int i=0;i<n;i++){
            ++arr[input.nextInt()];
            ++arr2[input.nextInt()];
        }
        for(int i=0;i<n-1;i++){
            arr[input.nextInt()] = -1;
        }
        for(int i=0;i<max;i++){
            if(arr[i]!=-1){
                arr2[i] = -1;
                ans = arr[i];
                break;
            }
        }
        System.out.println(ans);
        for(int i=0;i<n-2;i++){
            arr2[input.nextInt()] = -1;
        }
        for(int i=0;i<max;i++){
            if(arr2[i]!=-1){
                ans = arr2[i];
                break;
            }
        }
        input.close();
        System.out.println(ans);
    }
}
