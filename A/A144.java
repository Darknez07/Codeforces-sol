import java.util.Scanner;

public class A144 {
    public static void Look_at(int[] arr){
        int n = arr.length;
        for(int i=0;i<n;i++)
            System.out.print(arr[i]+" ");
        System.out.println();
    }
    public static int find_val(int[] arr, int val, boolean rev){
        int n=arr.length;
        int i;
        if(rev){
            i=n-1;
            for(;i>=0;i--)
                if(val == arr[i])
                    return i;
        }else{
            i=0;
            for(;i<n;i++)
                if(val == arr[i])
                    return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int arr[] = new int[n];
        int i=0;
        while(i!=n){
            arr[i++] = input.nextInt();
        }
        input.close();
        int max = -1;
        int min = 200;
        for(i=0;i<n;i++){
            if(max < arr[i])
                max = arr[i];
            if(min > arr[i])
                min = arr[i];
        }
        int swap =0,min_idx=-1,max_idx=-1,temp=0;
        while(true){
            max_idx = find_val(arr, max,false);
            if(max_idx == 0)
                break;
            temp = arr[max_idx];
            arr[max_idx] = arr[max_idx - 1];
            arr[max_idx - 1] = temp;
            swap++;
        }
        while(true){
            min_idx = find_val(arr,min,true);
            if(min_idx == n - 1)
                break;
            temp = arr[min_idx + 1];
            arr[min_idx + 1] = arr[min_idx];
            arr[min_idx] = temp;
            swap++;
        }
        System.out.println(swap);
    }
}
