import java.util.Scanner;

public class A588 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long min = 0,sum = 0,price,need;
        for(int i=0; i<n;i++){
            need = input.nextLong();
            price = input.nextLong();
            if(i == 0)
                min = price;
            else{
                if(min > price)
                    min  = price;
            }
            sum+=(min*need);
        }
    input.close();
        System.out.println(sum);
    }
}
