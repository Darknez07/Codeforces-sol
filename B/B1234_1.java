import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;
import java.util.Stack;

public class B1234_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n,x,in;
        n = input.nextInt();
        x = input.nextInt();
        Queue<Integer> q = new LinkedList<Integer>();
        for(int i=0;i<n;i++){
            in = input.nextInt();
            if (q.contains(in))
                continue;
            if(q.size() == x){
                q.remove();
                q.add(in);
            }else{
                q.add(in);
            }
        }
        System.out.println(q.size());
        Stack<Integer> stack = new Stack<Integer>();
        while(q.size()!=0){
            stack.push(q.poll());
        }
        while(!stack.isEmpty()){
            System.out.print(stack.peek()+" ");
            stack.pop();
        }
        input.close();
    }
}
