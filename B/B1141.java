import java.util.Scanner;

public class B1141 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int hours = input.nextInt();
        int[] count = new int[2*hours];
        for(int i=0;i<hours;i++){
            count[i] = input.nextInt();
        }
        for(int i=hours;i<2*hours;i++){
            count[i] = count[i - hours];
        }
        int counter = 0,max = -1;
        if(count[0] == 1)
            counter = 1;
        for(int i=1;i<count.length;i++){
            if(count[i] == count[i - 1] && count[i] == 1){
                counter++;
            }else{
                max = Math.max(max, counter);
                if(count[i] == 1)
                    counter = 1;
                else
                    counter = 0;
            }
        }
        System.out.println(max);
        input.close();
    }
}
