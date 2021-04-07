import java.util.Scanner;

public class A443 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String in = input.nextLine();
        if(in.length() == 2)
            System.out.println(0);
        String p[] = in.substring(1, in.length() -1).split(", ");
        int[] counter = new int[26];
        try{
            for(String x: p)
                counter[x.charAt(0) - 'a']++;
        }catch(Exception e){
            input.close();
            return;
        }
        int unique = 0;
        for(int x: counter)
            if(x!=0)
                unique++;
        System.out.println(unique);
        input.close();
    }
}