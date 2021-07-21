import java.util.Scanner;
import java.util.Stack;

public class A1469 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        char[] x;
        boolean no;
        while (t-- != 0) {
            Stack<Character> build = new Stack<Character>();
            Stack<Integer> question = new Stack<Integer>();
            no = false;
            x = input.next().toCharArray();
            for (int i = x.length - 1; i >= 0; i--) {
                if (i == x.length - 1 && x[i] == '(') {
                    no = true;
                    break;
                }
                if (x[i] == ')'){
                    if(i == 0){
                        no = true;
                        break;
                    }
                    build.push(x[i]);
                }
                if (x[i] == '(') {
                    if (!build.empty())
                        build.pop();
                    else {
                        if (i < question.peek())
                            question.pop();
                        else {
                            no = true;
                            break;
                        }
                    }
                }
                if (x[i] == '?')
                    question.push(i);
            }
            if (no)
                System.out.println("No");
            else {
                if(build.size() > question.size()) {
                    System.out.println("No");
                } else if (build.size() == question.size()) {
                    System.out.println("Yes");
                } else if ((question.size() - build.size()) % 2 == 1) {
                    System.out.println("No");
                } else if ((question.size() - build.size()) % 2 == 0) {
                    System.out.println("Yes");
                } else if (!build.empty())
                    System.out.println("No");
                else {
                    System.out.println("Yes");
                }
            }
        }
        input.close();
    }
}
