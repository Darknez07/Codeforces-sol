import java.util.Scanner;

public class A768{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        Long[] arr = new Long[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextLong();
        }
        input.close();
        if(n <= 2){
            System.out.println(0);
        }else{
            int counter = 0;
            long a = Long.MAX_VALUE,b = Long.MIN_VALUE;
            for(int i=0;i<n;i++){
                if(a > arr[i]){
                    a = arr[i];
                }
                if(b < arr[i]){
                    b = arr[i];
                }
            }
            for(int i=0;i<n;i++){
                if(arr[i] < b && arr[i] > a){
                    counter++;
                }
            }
            System.out.println(counter);
        }
    }
}