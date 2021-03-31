import java.util.Scanner;

public class A268 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] home = new int[n];
        int[] away = new int[n];
        int x,y,i=0,count=0;
        while(n--!=0){
            x = input.nextInt();
            y = input.nextInt();
            home[i] = x;
            away[i] = y;
            i++;
        }
        input.close();
        for(i=0;i<home.length;i++)
            for(int j=0;j<home.length;j++)
                if(home[i] == away[j])
                    count++;
        System.out.println(count);
    }
}
