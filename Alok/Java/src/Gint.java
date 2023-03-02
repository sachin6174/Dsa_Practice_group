import java.util.Scanner;

public class Gint {
    public static int gint(double n){
        int ans = -1;
        for (int i = 1; i < n; i++) {
            if(i * i > n){
                ans = i - 1;
                break;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        double sqroot = Math.sqrt(n);
        System.out.println(Math.floor(sqroot));
        System.out.println(gint(n));
    }
    
}
