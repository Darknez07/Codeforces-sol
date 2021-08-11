import java.util.Scanner;

public class B1388 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,start;
        while(t--!=0){
            start = 1;
            n = input.nextInt();
            if(n == 1){
                System.out.print(8);
            }else if(n == 2){
                System.out.print(98);
            }else{
                // Every four bits form the max digits;
                start = (int)Math.ceil((double)n/4);
                // So last 4 digits needed to cut out
                // For every 4th digit we append 8;
                for(int i=0;i<n-start;i++){
                    System.out.print(9);
                }
                for(int i=0;i<start;i++){
                    System.out.print(8);
                }
            }
            System.out.println();
        }
        input.close();
    }
}
