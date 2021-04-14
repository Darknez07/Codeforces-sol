import java.util.Scanner;

public class A478{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long sum = 0;
        for(int i=0;i<5;i++){
            sum+=input.nextLong();
        }
        if(sum % 5 == 0 && sum!=0){
            System.out.println(sum/5);
        }else{
            System.out.println(-1);
        }
        input.close();
    }
}