import java.util.Scanner;

public class A1253 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n, diff;
        boolean ans = false;
        int a[];
        while (t-- != 0) {
            ans = true;
            n = input.nextInt();
            a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = input.nextInt();
            }
            for (int i = 0; i < n; i++) {
                a[i]-=input.nextInt();
            }
            for(int i = 0; i < n; i++) {
                if(a[i] < 0){
                    diff = a[i];
                    for(int l = i;l<n;l++){
                        if(a[l] == diff ){a[l] = 0;}
                        else if(a[l] == 0){break;}
                        else{ans = false;}
                    }
                    break;
                }
            }
            for(int k = 0;k<n;k++){
                if(a[k]!=0){ans = false;}
            }
            System.out.println(ans ? "YES":"NO");
        }
        input.close();
    }
}
