import java.util.Scanner;

public class A996 {
    int counter;
    public void CountCurr(long money){
        if(money == 0)
            return;
        if(money < 5 && money >= 1){
            counter++;
            CountCurr(money - 1);
        }
        if(money >= 5 && money < 10){
            counter++;
            CountCurr(money - 5);
        }
        if(money >= 10 && money < 20){
            counter++;
            CountCurr(money-10);
        }
        if(money >= 20 && money < 100){
            counter++;
            CountCurr(money-20);
        }
        if(money >= 100){
            // This does not make sense;
            if(money % 100 == 0){
                counter+=(money/100);
                CountCurr(0);
            }else{
                counter+=(money/ 100);
                CountCurr(money % 100);
            }
        }

    }
    public static void main(String[] args) {
        A996 a = new A996();
        Scanner input = new Scanner(System.in);
        a.CountCurr(input.nextLong());
        input.close();
        System.out.println(a.counter);
    }
}
