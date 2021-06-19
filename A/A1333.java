import java.util.Scanner;

public class A1333 {
    public static void main(String[] args) {
        Scanner  input = new Scanner(System.in);
        int t = input.nextInt();
        int n,m,j;
        while(t--!=0){
            n = input.nextInt();
            m = input.nextInt();
            for(int i = 0; i<n;i++){
                for(j=0;j<m;j++){
                    if((n % 2 == 0 || m % 2 == 0) &&  (j == m - 2 && i == n - 1))
                        System.out.print("B");
                    else if((n % 2 == 0 || m % 2 == 0) &&  (j == m - 1 && i == n - 1))
                        System.out.print("B");
                    else if(i % 2 ==0  && j % 2 == 0)
                        System.out.print("B");
                    else if(i % 2 == 1 && j % 2 == 1)
                        System.out.print("B");
                    else
                        System.out.print("W");
                }
                System.out.println();
            }
        }
        input.close();
    }
}
