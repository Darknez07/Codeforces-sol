import java.util.Scanner;

public class A439{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int mins = input.nextInt();
        int a,jokes = 0;
        while(n--!=0){
            a = input.nextInt();
            mins-=(n > 0 ? (a+10) : a);
            jokes+=2;
        }
        jokes-=2;
        if(mins < 0)
            System.out.println(-1);
        else
            System.out.println((mins/5)+jokes);
        input.close();
    }
}