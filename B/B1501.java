import java.util.Scanner;

public class B1501 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,x;
        int[] ans;
        int rem = 0;
        // Peeche se aao aur dundho ki
        // Bada konsi index pe haii
        while(t--!=0){
            n = input.nextInt();
            ans = new int[n];
            for(int i=0;i<n;i++){
                x = input.nextInt();
                ans[i] = x;
            }
            for(int i=n-1;i>=0;i--){
                rem = (rem > ans[i]) ? rem : ans[i];
                ans[i] = (rem > 0) ? 1: 0;
                --rem;
            }
            for(int i=0;i<n;i++){
                System.out.print(ans[i]+" ");
            }
            System.out.println();
        }
        input.close();
    }
}
