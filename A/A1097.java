import java.util.Scanner;

public class A1097 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] s = input.next().toCharArray();
        String[] arr = new String[5];
        for(int i=0;i<5;i++){
            arr[i] = input.next();
        }
        input.close();
        boolean done = false;
        for(String q: arr){
            if(q.indexOf(s[0])!= -1 || q.indexOf(s[1])!= -1){
                done = true;
                break;
            }
        }
        System.out.println(done ? "YES": "NO");

    }
}
