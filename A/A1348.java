import java.util.Scanner;

public class A1348 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int start = 0,n;
        while(t--!=0){
            n = input.nextInt();
            start = 0;
            for(int i=1;i<=n/2;i++)
                start+=Math.pow(2, i);
            System.out.println(start);
        }
        input.close();
    }
}
