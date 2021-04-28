import java.util.Scanner;
public class B1373 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = Integer.parseInt(input.nextLine());
        int turn;
        while(t--!=0){
            turn = 0;
            String s = input.nextLine();
            int count = 0;
            while(s.length() > 1){
                count = s.length();
                for(int i=0;i<s.length() - 1;i++){
                    if(s.charAt(i) != s.charAt(i + 1)){
                        if(i == 0)
                            s = s.substring(i+2);
                        else
                            s = s.substring(0, i) + s.substring(i+2);
                        turn = turn  == 0 ? 1: 0;
                        break;
                    }
                }
                if(s.length() == count){
                    break;
                }
            }
            System.out.println(turn == 1 ? "DA": "NET");
        }
        input.close();
    }
}
