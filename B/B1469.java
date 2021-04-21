import java.util.Scanner;

public class B1469 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int n,m,sr,msr,br,mbr;
        while(t--!=0){
            sr = 0;
            br = 0;
            msr = 0;
            mbr = 0;
            n = input.nextInt();
            for(int i=0;i<n;i++){
                sr+=input.nextInt();
                msr = sr > msr ? sr : msr;
            }
            m = input.nextInt();
            for(int i=0;i<m;i++){
                br+=input.nextInt();
                mbr = br > mbr ? br : mbr;
            }
            System.out.println(mbr+msr);
        }
        input.close();
    }
}
