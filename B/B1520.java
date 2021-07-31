import java.util.Scanner;
// Done
// It took some brain mapping
public class B1520 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int lastdig = 0,counter,number,ten,w,f,n;
        while(t--!=0){
            f = input.nextInt();
            number = 0;
            counter = 0;
            if(f < 10){
                System.out.println(f);
            }else{
                n = f;
                while(n >= 10){
                    n/=10;
                    lastdig = n % 10;
                    counter++;
                }
                w = counter;
                ten = (int)Math.pow(10, counter);
                while(counter--!=-1){
                    number+=(lastdig*ten);
                    ten/=10;
                }
                n = f;
                if(n < number){
                    System.out.println(9*w + lastdig - 1);
                }else if(n >= number){
                    System.out.println(9*w + lastdig);
                }
            }
        }
        input.close();
    }
}
