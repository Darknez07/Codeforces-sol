import java.util.*;
public class A1542 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] parity;
        int n;
        while(t--!=0){
            n = input.nextInt();
            n*=2;
            parity = new int[2];
            for(int i=0;i<n;i++){
                parity[input.nextInt() % 2]++;
            }
            if(parity[0] == parity[1]){
                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
        input.close();
    }
}
