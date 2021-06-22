import java.util.Scanner;

public class A1359_1{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,m,k,cards;
        while(t--!=0){
            n = input.nextInt();
            m = input.nextInt();
            k = input.nextInt();
            cards = n/k;
            if(cards >= m)
                System.out.println(m);
            else{
                // b*(k - 1) alloting second max to everybody left
                // if possible alloting 1 to (k - 2) people
                // hence total = b*(k - 1) - 1*(k -2) = (m - a)
                m = (m - cards + k - 2)/(k - 1);
                System.out.println(cards - m);
            }
        }
        input.close();
    }
}