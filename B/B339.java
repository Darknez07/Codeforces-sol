import java.util.Scanner;

public class B339 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long t = input.nextLong();
        long curr = 1,task;
        long counter =0;
        while(t--!=0){
            task = input.nextLong();
            if(task == curr){
                continue;
            }else if(curr > task){
                counter+=(n - curr);
                counter+=task;
                curr = task;
            }else{
                counter+=(task - curr);
                curr = task;
            }
        }
        input.close();
        System.out.println(counter);
    }
}
