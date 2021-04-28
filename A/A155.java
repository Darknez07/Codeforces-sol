import java.util.Scanner;

public class A155 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++) {
            arr[i] = input.nextInt();
        }
        int seek = 1;
        boolean greater,lesser;
        int count = 0;
        while(true){
            if(seek == n)
                break;
            greater = false;
            lesser = false;
            for(int i=0;i<seek;i++){
                if(lesser && greater)
                    break;
                if(arr[i] > arr[seek])
                    lesser = true;
                if(arr[i] < arr[seek])
                    greater = true;
                if(arr[i] == arr[seek]){
                    lesser = true;
                    greater = true;
                }
            }
            if(lesser && !greater)
                count++;
            if(greater && !lesser)
                count++;
            seek++;
        }
        System.out.println(count);
        input.close();
    }
}
