import java.util.*;
public class B1230{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int l = input.nextInt();
        int chang = input.nextInt();
        char[] ch = input.next().toCharArray();
        input.close();
        if(chang == 0){
            System.out.println(String.valueOf(ch));
            return;
        }
        if(l == 1 && chang == 1){
            System.out.println(0);
            return;
        }
        if(ch[0] == '1')
            System.out.print(ch[0]);
        else{
            System.out.print(1);
            chang--;
        }
        int i = 1;
        while(chang > 0 && i < l){
            if(ch[i] == '0'){
                System.out.print(ch[i]);
            }else{
                System.out.print(0);
                chang--;
            }
            i++;
        }
        while(i < l){
            System.out.print(ch[i]);
            i++;
        }
    }
}