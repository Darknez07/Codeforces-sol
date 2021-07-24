import java.util.Scanner;

public class B1020 {
    public static int Pointer(int[] search, int i, boolean[] find){
        if(find[i - 1])
            return i;
        else{
            find[i - 1] = true;
            return Pointer(search, search[i - 1], find);
        }
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int students = input.nextInt();
        int[] pointing = new int[students];
        for(int i=0;i<students;i++){
            pointing[i] = input.nextInt();
        }
        input.close();
        for(int i=0;i<students;i++){
            boolean[] space = new boolean[students];
            System.out.print(Pointer(pointing,i+1,space)+" ");
        }
    }
}
