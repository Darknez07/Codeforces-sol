import java.util.*;
public class A1538 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int[] counter;
        int n;
        while(t--!=0){
            n = input.nextInt();
            counter = new int[n + 1];
            for(int i=0;i<n;i++){
                counter[input.nextInt()] = i + 1;
            }
            int rm = n - counter[n] + 1;
            int rmin = n - counter[1] + 1;
            int a1 = Math.max(rm,rmin); // One sided;
            int a2 = Math.max(counter[1],counter[n]); // Simple delete one sided
            int a3 = Math.min(counter[n] + rmin, counter[1] + rm); // Converge delete
            System.out.println(Math.min(a1,Math.min(a2,a3)));
        }
        input.close();
    }
}
