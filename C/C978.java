import java.util.Scanner;

public class C978 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        long in;
        long range[] = new long[n];
        for(int i=0; i<n; i++) {
            if(i!=0){
                range[i] = input.nextLong();
                range[i]+=range[i-1];
            }else{
                range[i] = input.nextLong();
            }
        }
        int j = 0;
        for(int i=0; i<m; i++) {
            in = input.nextLong();
            if(range[j] >= in && j == 0){
                System.out.print(1+" "+in);
                System.out.println();
            }else{
                while(!(range[j] < in && range[j+1] >= in))
                    j++;
                System.out.print((j+2)+" ");
                System.out.print((in - range[j]));
                System.out.println();
            }
        }
        input.close();
    }
}
