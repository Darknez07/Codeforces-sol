import java.util.Arrays;
import java.util.Scanner;

public class D1512{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,idx;
        long[] b;
        long check,tw;
        while(t--!=0){
            n = input.nextInt();
            b = new long[n + 2];
            tw = 0;
            for(int i=0;i<n+2;i++){
                b[i] = input.nextLong();
            }
            Arrays.sort(b);
            for(int i=n-1;i>=0;i--){
                tw+=b[i];
            }
            if(tw == b[n]){
                for(int i=0;i<n;i++){
                    System.out.print(b[i]+" ");
                }
            }else{
                check = b[n + 1];
                tw+=b[n];
                idx = -1;
                for(int i=0;i<=n;i++){
                    if(b[i] + check == tw){
                        idx = i;
                        break;
                    }
                }
                if(idx < 0){System.out.print(-1);}
                else{
                    for(int i=0;i<=n;i++){
                        if(i == idx){continue;}
                        else{System.out.print(b[i]+" ");}
                    }
                }
            }
            System.out.println();
        }
        input.close();
    }
}