import java.util.Scanner;

public class A1551 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int val,one,two,temp;
        while(t--!=0){
            val = input.nextInt();
            if(val == 1){
                System.out.println(1+" "+0);
            }else{
                temp = (val/3 + (val % 3 == 0 ? 0: 1));
                one = val/3;
                if(temp*2 +  one == val){
                    two = temp;
                }else{
                    two = one;
                    one = temp;
                }
                System.out.println(one+" "+two);
            }
        }
        input.close();
    }
}
