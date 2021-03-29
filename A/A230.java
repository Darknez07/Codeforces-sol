import java.util.ArrayList;
import java.util.Scanner;
import java.util.*;
public class A230 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int strngth = input.nextInt();
        int t = input.nextInt();
        boolean no = false;
        int i =0;
        ArrayList<Fuck> f = new ArrayList<Fuck>();
        while(t--!=0){
            Fuck fed = new Fuck();
            fed.drag = input.nextInt();
            fed.value = input.nextInt();
            f.add(fed);
            i++;
        }
        input.close();
        Collections.sort(f, new Sorts());
        for(i=0;i<f.size();i++){
            if(f.get(i).drag < strngth){
                strngth+=f.get(i).value;
            }else{
                no = true;
                break;
            }
        }
        if(no)
            System.out.println("NO");
        else
            System.out.println("YES");
    }
}
class Fuck{
    public int drag;
    public int value;
}
class Sorts implements Comparator<Fuck>{
    public int compare(Fuck a, Fuck b){
        return a.drag - b.drag;
    }
}