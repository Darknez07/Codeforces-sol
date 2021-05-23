import java.util.Scanner;

public class A320 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        input.close();
        int fourcount = 0;
        boolean no = false;
        for(int i=0;i<s.length();i++){
            if(i == 0 && s.charAt(i)!='1'){
                no = true;
                break;
            }
            if(s.charAt(i) == '1'){
                fourcount = 0;
                continue;
            }
            else{
                if(s.charAt(i) == '4'){
                    if(fourcount < 2)
                        fourcount++;
                    else{
                        no = true;
                        break;
                    }
                }else{
                    no = true;
                    break;
                }
            }
        }
        if(!no)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}
