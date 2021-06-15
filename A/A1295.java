import java.util.Scanner;

public class A1295 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n;
        while(t--!=0){
            n = input.nextInt();
            if((n & 1) != 0){System.out.print(7);n-=3;}
            for(long i=0;i<(n/2);i++){System.out.print(1);}
            System.out.println();
        }
        input.close();
    }
}
