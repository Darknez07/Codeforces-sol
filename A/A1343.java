import java.util.Scanner;

public class A1343 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long num,x,check;
        while(t--!=0){
            num = input.nextLong();
            check = 1;
            for(x=1;x<50;x++){
                check = 2 *check + 1;
                if(num % check !=0){
                    continue;
                }else{
                    break;
                }
            }
            System.out.println(num / check);
        }
    }
}
