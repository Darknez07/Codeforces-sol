import java.util.Scanner;

public class A1537{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long sum;
        int n;
        while(t--!=0){
            n = input.nextInt();
            sum = 0;
            for(int i=0;i<n;i++){
                sum+=input.nextInt();
            }
            if(sum < 0 || sum < n){
                System.out.println(1);
            }else{
                System.out.println(sum - n);
            }
        }
        input.close();
    }
}