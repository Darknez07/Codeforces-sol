import java.util.Scanner;

public class A75 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long a = input.nextLong();
        long b = input.nextLong();
        long c = a + b;
        char[] one = String.valueOf(a).toCharArray();
        char[] two = String.valueOf(b).toCharArray();
        char[] ans = String.valueOf(c).toCharArray();
        String s="",s1="",s2="";
        for(int i=0;i<ans.length;i++){
            if(ans[i]!='0')
                s+=ans[i];
        }
        for(int i=0;i<one.length;i++){
            if(one[i]!='0')
                s1+=one[i];
        }
        for(int i=0;i<two.length;i++){
            if(two[i]!='0')
                s2+=two[i];
        }
        if(Integer.parseInt(s1)+Integer.parseInt(s2) == Integer.parseInt(s)){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        input.close();
    }
}
