import java.util.Scanner;

public class A1433 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int val,to_add;
        while(t--!=0){
            char[] goal = input.next().toCharArray();
            val = Integer.parseInt(Character.toString(goal[0]));
            to_add = 10*(val - 1);
            for(int i =0;i<goal.length;i++){
                    to_add+=(i+1);
            }
            System.out.println(to_add);
        }
        input.close();
    }
}
