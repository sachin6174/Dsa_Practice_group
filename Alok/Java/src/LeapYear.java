import java.util.Scanner;

public class LeapYear {
    public static void main(String[] args) throws Exception {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the year: ");
        int n = in.nextInt();
        if(n % 4 == 0){
            if(n % 100 == 0){
                if(n % 400 == 0){
                    System.out.println("Yes");
                }else{
                    System.out.println("No");
                }
            }else{
                System.out.println("Yes");
            }
        }else{
            System.out.println("No");
        }
    }
}
