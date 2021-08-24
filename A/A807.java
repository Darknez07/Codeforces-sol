import java.util.Scanner;

public class A807 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int rat,pat,i = 0,rated = 0,prev;
        rat = input.nextInt();
        pat = input.nextInt();
        if((rat - pat)!=0)
            rated = 1;
        i = 1;
        prev = pat;
        while(i++!=t){
            rat = input.nextInt();
            pat = input.nextInt();
            if((rat - pat)!=0){
                rated = 1;
                continue;
            }
            if(rated == 1 || rated == -1)
                continue;
            if(prev < pat)
                rated = -1;
            prev = pat;
        }
        if(rated == 1){
            System.out.println("rated");
        }else if(rated == -1){
            System.out.println("unrated");
        }else{
            System.out.println("maybe");
        }
        input.close();
    }
}
