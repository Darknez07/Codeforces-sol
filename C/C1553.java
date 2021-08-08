import java.util.Scanner;

public class C1553 {
    public static int Win(char[] arr, int who){
        // Because two players are playing.
        int[] goals = new int[2];
        int[] r = new int[2];
        // It can be applied in general
        // As two players were playing so
        // Each got half and half
        r[0] = 5;r[1] = 5;
        for(int i=0;i<10;i++){
            // If the rounds are not enough to cover backlog;
            if(goals[0] >  goals[1] + r[1] || goals[1] > goals[0]  + r[0]){
                return i;
            }else if(arr[i] == '1'){ // Check if goal occurs
                goals[i % 2]++;
            }else if(arr[i] == '?' && who == i % 2){
                // Special case when "?" and we need who to win;
                goals[i % 2]++;
            }
            // Does not matter the thing is rounds are decreasing;
            r[i % 2]--;
        }
        return 10;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t--!=0){
            char[] arr = input.next().toCharArray();
            // Minimize round by watching players win
            // Hence get the minimal score
            System.out.println(Math.min(Win(arr,0),Win(arr, 1)));
        }
        input.close();
    }
}
