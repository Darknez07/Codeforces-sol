import java.util.Scanner;

public class B680 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int loc = input.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = input.nextInt();
        }
        input.close();
        int thiefs = 0;
        int j = loc - 2;
        int i;
        if(arr[loc - 1] == 1)
            thiefs++;
        for(i=loc;i<n;i++){
            if(j < 0)
                break;
            if(arr[i] == 1 && arr[j] == 1)
                thiefs+=2;
            j--;
        }
        while(i!=n){
            if(arr[i] == 1)
                thiefs++;
            i++;
        }
        while(j!=-1){
            if(arr[j] == 1)
                thiefs++;
            j--;
        }
        System.out.println(thiefs);
    }
}
