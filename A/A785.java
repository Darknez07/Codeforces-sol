import java.util.HashMap;
import java.util.Scanner;

public class A785{
    public static void main(String[] args) {
        HashMap<String, Integer> m = new HashMap<String, Integer>();
        m.put("Tetrahedron", 4);
        m.put("Cube", 6);
        m.put("Octahedron", 8);
        m.put("Dodecahedron", 12);
        m.put("Icosahedron", 20);
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int ans = 0;
        while (n-- != 0) {
            ans += m.get(input.next());
        }
        input.close();
        System.out.println(ans);
    }
}
