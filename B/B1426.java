import java.util.Scanner;

public class B1426{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,number_of_tiles;
        boolean yes;
        while(t--!=0){
            number_of_tiles = input.nextInt();
            n = input.nextInt();
            yes = false;
            for(int i=0;i<number_of_tiles;i++){
                int[][] a = new int[2][2];
                for(int j=0;j<2;j++){
                    for(int k=0;k<2;k++){
                        a[j][k] = input.nextInt();
                    }
                }
                if(a[0][1] == a[1][0]){
                    yes = true;
                }
            }
            if(n % 2 == 1){
                System.out.println("NO");
            }else{
                if(yes){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
            }
        }
        input.close();
    }
}