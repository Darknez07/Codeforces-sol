import java.util.Scanner;

public class A476 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int possible;
        if(m > n){
            System.out.println(-1);
        }else{
            possible = n/2 + n % 2;
            while(possible % m !=0){
                possible++;
            }
            System.out.println(possible);
        }
        input.close();
    }
}