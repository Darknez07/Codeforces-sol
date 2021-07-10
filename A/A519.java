import java.util.HashMap;
import java.util.Scanner;

public class A519 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s;
        int white=0,black=0;
        for(int i=0;i<8;i++){
            s = input.nextLine();
            char[] ch = s.toCharArray();
            for(int j=0;j<8;j++){
                if(ch[j] == '.')
                    continue;
                if(Character.isUpperCase(ch[j])){
                    if(ch[j] == 'B' || ch[j] == 'N')
                        white+=3;
                    else if(ch[j] == 'Q')
                        white+=9;
                    else if(ch[j] == 'R')
                        white+=5;
                    else if(ch[j] == 'P')
                        white++;
                }else{
                    if(ch[j] == 'b' || ch[j] == 'n')
                        black+=3;
                    else if(ch[j] == 'q')
                        black+=9;
                    else if(ch[j] == 'r')
                        black+=5;
                    else if(ch[j] == 'p')
                        black++;
                }
            }
        }
        if(black > white){
            System.out.println("Black");
        }else if(white > black){
            System.out.println("White");
        }else{
            System.out.println("Draw");
        }
        input.close();
    }
}
