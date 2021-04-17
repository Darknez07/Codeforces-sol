import java.util.Scanner;
// Better solution
public class A500 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int reach = input.nextInt();
        int arr[] = new int[n];
        for(int i = 1; i < n; i++){
            arr[i] = input.nextInt() + i;
        }
        input.close();
        int start = 1;
        boolean done = false;
        while(!done){
            if(start == n){
                done = true;
                break;
            }
            start = arr[start];
            if(start == reach){
                break;
            }
        }
        if(done){
            System.out.println("NO");
        }else{
            System.out.println("YES");
        }
    }
}
