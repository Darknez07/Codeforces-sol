import java.util.Scanner;

public class A61 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String a = input.next();
        String b = input.next();
        input.close();
        String ans="";
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)!=b.charAt(i)){
                ans+="1";
            }
            else{
                ans+="0";
            }
        }
        System.out.println(ans);

    }
}
