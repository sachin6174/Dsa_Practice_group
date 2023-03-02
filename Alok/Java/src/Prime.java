import java.util.Scanner;

public class Prime {
    public static void primeSeive(int n){
        int arr[] = new int[n + 2];
        for (int i = 2; i * i <= n + 1; i++) {
            for (int j = i * i; j <= n + 1; j += i) {
                arr[j] = 1;
            }
        }
        for (int i = 2; i <= n + 1; i++) {
            if (arr[i] == 0) {
                System.out.print(i + " ");
            }
        }
    }
    public static void primeNormal(int n){
        boolean isPrime = true;
        for(int i = 2; i * i <= n;i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            System.out.println("prime");
        }else{
            System.out.println( "Not Prime");
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        primeNormal(n);
    }
    
}
