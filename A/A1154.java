import java.util.Scanner;

public class A1154 {
    public static void main(String[] args) {
        int circle = 4;
        int[] arr = new int[circle];
        int max = 0,ans,i=0;
        Scanner input = new Scanner(System.in);
        while(circle--!=0){
            ans = input.nextInt();
            if(arr[max] < ans)
                max = i;
            arr[i++] = ans;
        }
        input.close();
        for(i=0;i<4;i++){
            if(i == max)
                continue;
            else
                System.out.print((arr[max] - arr[i])+" ");
        }
    }
}
