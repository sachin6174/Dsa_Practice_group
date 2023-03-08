public class BarGraphUniversal {
    public static void main(String[] args) {
        int arr[] = { -2, 1, 9, -3, 2 };
        int max = -1;
        int min = 99;
        for (int x : arr) {
            min = Math.min(x, min);
            max = Math.max(max, x);
        }
        int maxLocal = max;

        for(int i = 0;i < max;i++){
            for (int j = 0; j < arr.length; j++) {
                if(arr[j] == maxLocal){
                    System.out.print("*");
                    arr[j]--;
                }else{
                    System.out.print(" ");
                }
                
            }
            maxLocal--;
            System.out.println();

        }
        
        for (int i = 0; i < arr.length; i++) {
            System.out.print("-");
        }
        int minLocal = -min;
        System.out.println();

        for (int i = 0; i < minLocal; i++) {
            for (int j = 0; j < arr.length; j++) {
                if(arr[j] < 0){
                    System.out.print("*");
                    arr[j]++;
                }else{
                    System.out.print(" ");
                }

            }
            System.out.println();

        }
    }
}
