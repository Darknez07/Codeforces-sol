import java.util.Scanner;

public class A139 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int pages = input.nextInt();
        int days = 0;
        int[] day_pages = new int[7];
        for(int i=0;i<7;i++){
            day_pages[i] = input.nextInt();
        }
        input.close();
        while(pages > 0){
            pages-=day_pages[days % 7];
            days++;
        }
        System.out.println(days % 7 == 0 ? 7: days % 7);
    }
}
