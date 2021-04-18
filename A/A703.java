import java.util.Scanner;

public class A703{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int rounds = input.nextInt();
        int mis=0,chis=0,miss,chiss;
        while(rounds--!=0){
            miss = input.nextInt();
            chiss = input.nextInt();
            if(miss != chiss){
                mis += miss > chiss ? 1: 0;
                chis += chiss > miss ? 1: 0;
            }
        }
        if(mis == chis)
            System.out.println("Friendship is magic!^^");
        else if(mis > chis)
            System.out.println("Mishka");
        else
            System.out.println("Chris");
        input.close();
    }
}