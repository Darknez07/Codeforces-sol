import java.util.Scanner;

public class A734 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        String s = input.next();
        int ant = 0;
        int dan = 0;
        for(int i=0;i<a;i++)
            if(s.charAt(i) == 'A')
                ant++;
            else if(s.charAt(i) == 'D')
                dan++;
        if(ant > dan)
            System.out.println("Anton");
        else if(dan > ant)
            System.out.println("Danik");
        else
            System.out.println("Friendship");

        input.close();
    }
}
