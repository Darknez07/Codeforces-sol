import java.util.*;
public class A711 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        char[][] ch = new char[t][5];
        boolean done = false;
        for(int i=0;i<t;i++){
            ch[i] = input.next().toCharArray();
            if(ch[i][0] == 'O' && ch[i][1] == 'O' &&  !done){
                ch[i][0] = '+';
                ch[i][1] = '+';
                done = true;
            }
            if(ch[i][3] == 'O' && ch[i][4] == 'O' && !done){
                ch[i][3] = '+';
                ch[i][4] = '+';
                done = true;
            }
        }
        System.out.println(done ? "YES":"NO");
        if(done){
        for(int i=0;i<t;i++){
            System.out.println(String.valueOf(ch[i]));
        }
    }
        input.close();
    }
}
