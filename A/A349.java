import java.util.Scanner;

public class A349 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long add;
        long[] bill = new long[3];
        boolean no = false;
        while(t--!=0){
            add = input.nextLong();
            if(add == 25){
                ++bill[0];
            }else if(add == 50){
                if(bill[0] > 0){
                    --bill[0];
                }else{
                    no = true;
                    break;
                }
                ++bill[1];
            }else if(add == 100){
                if(bill[1] > 0){
                    --bill[1];
                    if(bill[0] > 0){
                        --bill[0];
                    }else{
                        no = true;
                        break;
                    }
                }else{
                    if(bill[0] - 3 >= 0){
                        bill[0]-=3;
                    }else{
                        no = true;
                        break;
                    }
                }
                ++bill[2];
            }
        }
        input.close();
        if(no){
            System.out.println("NO");
        }else{
            System.out.println("YES");
        }
    }
}
