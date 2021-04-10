import java.util.Scanner;

public class A96 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char ch[] =  input.next().toCharArray();
        input.close();
        int counter = 1;
        boolean yes = false;
        char c = ch[0];
        for(int i=1; i<ch.length;i++){
            if(counter == 7){
                yes = true;
                break;
            }
            if(c == ch[i]){
                ++counter;
            }else{
                c = ch[i];
                counter =1;
            }
        }
        if(counter == 7)
            yes = true;
        if(yes)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
