import java.util.*;

public class A469 {
    public static void main(String[] args) {
        Set<Integer> list = new LinkedHashSet<Integer>();
        Scanner input = new Scanner(System.in);
        int goal = input.nextInt();
        int first = input.nextInt();
        String x ="I become the guy.";
        while (first--!=0){
            list.add(input.nextInt());
        }
        int second = input.nextInt();
        while(second--!=0){
            list.add(input.nextInt());
        }
        input.close();
        for(int i=1;i<=goal;i++){
            if(!list.contains(i)){
                x ="Oh, my keyboard!";
                break;
            }
        }
        System.out.println(x);
    }
}
