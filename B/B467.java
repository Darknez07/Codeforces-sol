import java.util.Scanner;

public class B467 {
    public static int ones(int n){
        int count =0;
        while(n!=0){
            n = n & (n - 1);
            count++;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int bits = input.nextInt();
        int m = input.nextInt();
        int k = input.nextInt();
        int arr[] = new int[m];
        int i = 0;
        while(i!=m){
            arr[i++] = input.nextInt();
        }
        int num = input.nextInt();
        int friends = 0;
        // System.out.println(num);
        input.close();
        for(i=0;i<m;i++){
            arr[i]^=num;
            if(ones(arr[i]) <= k)
                friends++;
        }
        System.out.println(friends);
    }
}
