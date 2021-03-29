import java.util.*;
public class A236 {
    public static void main(String[] args) {
        int[] counter = new int[26];
        Scanner input = new Scanner(System.in);
        char[] letters = input.next().toLowerCase().toCharArray();
        input.close();
        int n = letters.length;
        int counts = 0;
        for(int i =0;i<n;i++)
            counter[letters[i] - 97]++;
        for(int i=0;i<26;i++)
            if(counter[i] > 0)
                counts++;
        if(counts % 2 == 1)
            System.out.println("IGNORE HIM!");
        else
            System.out.println("CHAT WITH HER!");
    }
}
