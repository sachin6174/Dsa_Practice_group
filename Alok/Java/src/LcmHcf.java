import java.util.Scanner;

public class LcmHcf {
    public static int hcf(int a, int b){
        if(b % a == 0){
            return a;
        }

        return hcf(b % a, a);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n1 = in.nextInt();
        int n2 = in.nextInt();
        int gcd = hcf(n1, n2);
        System.out.println("HCF is: " + gcd);
        System.out.println("LCM is: " + (n1 * n2) / gcd);

    }
    
}
