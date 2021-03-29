import java.util.Scanner;
// Maintains structural identity of rhombus
// Above 10
public class B118 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.close();
        int spaces = 0,go = 0;
        for(int i=0;i<t;i++){
            spaces = t - (i == t ? t: i % t);
            go = i;
            for(int k=0;k<2*spaces;k++){
                System.out.print(" ");
            }
            for(int j=0;j<go;j++){
                if(j % t < 10)
                    System.out.print(j%t+" ");
                else
                    System.out.print(j%t);
            }
            for(int j=go;j>=1;j--){
                if(j % t < 10)
                    System.out.print(j%t+" ");
                else
                    System.out.print(j%t);
            }
            System.out.print(0);
            System.out.println();
        }
        for(int i=0;i<t;i++){
            if(i < 10)
                System.out.print(i+" ");
            else
                System.out.print(i);
        }
        for(int i=t;i>=1;i--){
            if(i < 10)
                System.out.print(i+" ");
            else
                System.out.print(i);
        }
        System.out.print(0);
        System.out.println();
        for(int i=t-1;i>=0;i--){
            spaces = t - (i == t ? t: i % t);
            go = i;
            for(int k=0;k<2*spaces;k++){
                System.out.print(" ");
            }
            for(int j=0;j<go;j++){
                if(j % t < 10)
                    System.out.print(j%t+" ");
                else
                    System.out.print(j%t);
            }
            for(int j=go;j>=1;j--){
                if(j % t < 10)
                    System.out.print(j%t+" ");
                else
                    System.out.print(j%t);
            }
            System.out.print(0);
            System.out.println();
        }
    }
}
