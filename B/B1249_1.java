import java.util.Scanner;
// I can't believe i wrote this code
public class B1249_1 {
    static int tim =0;
    public static void start(int start, int arr[],int constant){
        tim++;
        if(start == constant){
            return;
        }
        start(arr[start-1],arr,constant);
        return;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        int arr[];
        int find[];
        while(t--!=0){
            n = input.nextInt();
            arr = new int[n];
            for(int i = 0; i < n; i++){
                arr[i] = input.nextInt();
            }
            find = new int[n];
            for(int i=0;i<n;i++){
                start(arr[i],arr,i+1);
                find[i] = tim;
                tim = 0;
            }
            for(int x: find){
                System.out.print(x+" ");
            }
            System.out.println();
        }
        input.close();
    }
}
