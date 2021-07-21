import java.util.Scanner;

public class A1467 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,counter;
        while(t--!=0){
            n = input.nextInt();
            counter = 0;
            for(int i=0;i<n;i++){
                if(i == 0 || i == 2)
                    System.out.print(9);
                if(i == 1)
                    System.out.print(8);
                if(i > 2){
                    System.out.print(counter);
                    counter = counter == 9 ? 0: counter + 1;
                }
            }
            System.out.println();
        }
        input.close();
    }
}
