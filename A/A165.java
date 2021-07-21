import java.util.Scanner;

public class A165 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] x = new int[n];
        int[] y = new int[n];
        for(int i=0;i<n;i++){
            x[i] = input.nextInt();
            y[i] = input.nextInt();
        }
        input.close();
        int f = n*n;
        int[] diffx = new int[f];
        int[] diffy = new int[f];
        int k =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                diffx[k] = x[i] - x[j];
                diffy[k] = y[i] - y[j];
                k++;
            }
        }
        int[] arr = new int[4];
        int counter = 0;
        for(int i=0;i<f;i++){
            if(i % n == 0){
                if(!(arr[0] == 0 || arr[1] == 0 || arr[2] == 0 || arr[3] == 0))
                    counter++;
                arr = new int[4];
            }
            if(diffx[i] == 0 && diffy[i] < 0){
                arr[0]++;
            }else if(diffx[i] == 0 && diffy[i] > 0){
                arr[1]++;
            }else if(diffx[i] < 0 && diffy[i] == 0){
                arr[2]++;
            }else if(diffx[i] > 0 && diffy[i] == 0){
                arr[3]++;
            }else{
                continue;
            }
        }
        if(!(arr[0] == 0 || arr[1] == 0 || arr[2] == 0 || arr[3] == 0))
            counter++;
        System.out.println(counter);
    }
}
