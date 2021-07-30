import java.util.Scanner;

public class B1005 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char[] a = input.nextLine().toCharArray();
        char[] b = input.nextLine().toCharArray();
        int i=a.length - 1,j = b.length - 1;
        long count = 0;
        boolean done = false;
        while(i >=0 && j>= 0){
            if(a[i] != b[j]){
                done = true;
            }
            if(done){count+=2;}
            i--;
            j--;
        }
        while(i >= 0){
            count++;
            i--;
        }
        while(j >= 0){
            count++;
            j--;
        }
        System.out.println(count);
        input.close();
    }
}
