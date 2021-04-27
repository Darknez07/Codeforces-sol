import java.util.Scanner;

public class B1367 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int i,counter,even_counter = 0,odd_counter =0;
        while(t--!=0){
            int n = input.nextInt();
            i =0;
            even_counter = 0;
            odd_counter = 0;
            while(i!=n){
                counter = input.nextInt();
                even_counter+= (i % 2 != counter % 2 ) ? (i % 2 == 0 ? 1: 0): 0 ;
                odd_counter+=(i % 2 != counter % 2) ? (i % 2 != 0 ? 1: 0): 0 ;
                i++;
            }
            if(even_counter == odd_counter)
                System.out.println(even_counter);
            else
                System.out.println(-1);
        }
        input.close();
    }
}
