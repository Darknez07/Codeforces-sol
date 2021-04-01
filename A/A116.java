import java.util.Scanner;

public class A116 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int intram = 0;
        int max = -1;
        while(n--!=0){
            int utarnewale = input.nextInt();
            int chaddnewale = input.nextInt();
            intram = intram + chaddnewale - utarnewale;
            if(intram > max)
                max = intram;
        }
        System.out.println(max);
        input.close();
    }
}