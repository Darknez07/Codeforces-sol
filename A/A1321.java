import java.util.*;
public class A1321{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] robo = new int[n],beav = new int[n];
        for(int i=0;i<n;i++){
            robo[i] = input.nextInt();
        }
        for(int i=0;i<n;i++){
            beav[i] = input.nextInt();
        }
        int rones = 0,bones = 0;
        for(int i=0;i<n;i++){
            if(robo[i] == beav[i])
                continue;
            if(robo[i] == 1)
                rones++;
            else if(beav[i] == 1)
                bones++;
        }
        System.out.println(rones > 0 ? (bones/rones + 1): -1);
        input.close();
    }
}