import java.util.Scanner;
// Wrong Not correct
public class B1342 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t--!=0){
            String s = "";
            char[] ch = input.next().toCharArray();
            for(int i = 0; i < ch.length;i++){
                if(ch[i] == '1'){
                    s+='0';
                    s+=ch[i];
                }else{
                    s+=ch[i];
                    s+='1';
                }
            }
            System.out.println(s);
        }
        input.close();
    }
}
