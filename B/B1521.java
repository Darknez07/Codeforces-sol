import java.util.Scanner;
// Not completed
public class B1521 {
    static int[] primes = { 2,
        3,
        5,
        7,
        11,
        13,
        17,
        19,
        23,
        29,
        31,
        37,
        41,
        43,
        47,
        53,
        59,
        61,
        67,
        71,
        73,
        79,
        83,
        89,
        97,
        101,
        103,
        107,
        109,
        113,
        127,
        131,
        137,
        139,
        149,
        151,
        157,
        163,
        167,
        173,
        179,
        181,
        191,
        193,
        197,
        199,
        211,
        223,
        227,
        229,
        233,
        239,
        241,
        251,
        257,
        263,
        269,
        271,
        277,
        281,
        283,
        293,
        307,
        311,
        313,
        317,
        331,
        337,
        347,
        349};
    public static long NearestPrime(long a, long b){
        long n = Math.min(a, b);
        if(n > 400){
            for(int i=0;i<primes.length;i++){
                if(a % primes[i]!=0 && b % primes[i]!=0)
                    return primes[i];
            }
        }else if( n > 350 && n <= 450){
            return primes[primes.length-1];
        }else{
            for(int i=0;i<primes.length - 1;i++){
                if(primes[i+1] > n && primes[i] <= n)
                    return primes[i];
            }
        }
        return -1;
    }
    public static long gcd(long a, long b){
        if(a == 0) return b;
        else return gcd(b % a    , a);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        long[] a;
        int n;
        while(t--!=0){
            n = input.nextInt();
            a = new long[n];
            for(int i=0;i<n;i++){
                a[i] = input.nextLong();
            }
            for(int i=0;i<n;i++){
                int j;
                for(j=i+1;j<n;j++){
                    if(gcd(a[i],a[j]) != 1){
                        a[i] = a[j];
                        a[j] = NearestPrime(a[i], a[j]);
                    }
                }
            }
            for(int i=0;i<n;i++){
                System.out.print(a[i]+" ");
            }
            System.out.println();
        }
        input.close();
    }
}
