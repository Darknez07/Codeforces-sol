import java.util.Scanner;

public class B1077 {
    public static void Show_state(int[] arr){
        for(int i=0; i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int prev,curr,next;
        int[] arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = input.nextInt();

        prev = n - 1;
        curr = n - 2;
        next = n - 3;
        int count = 0;
        while(next!=-1){
            if(arr[curr] == 0 && arr[next] == 1 && arr[prev] == 1){
                arr[next] = 0;
                count++;
            }
            prev = curr;
            curr = next;
            next--;
        }
        input.close();
        System.out.println(count);
    }
}
