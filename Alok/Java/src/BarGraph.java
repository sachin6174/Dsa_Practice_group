public class BarGraph {
    public static void main(String[] args) {
        int arr[] = { 2, 0, 7, 1, 6 };
        int max = -1;
        for (int element : arr) {
            max = Math.max(element, max);
        }
        System.out.println("max " + max);
        int max2 = max;
        for (int i = 0; i < max; i++) {
            for (int j = 0; j < arr.length; j++) {
               if (arr[j] == max2) {
                    System.out.print("*");
                    arr[j]--;
                }
                else{
                    System.out.print(" ");
                }
                
            }
            max2--;
            System.out.println();
        }

    }

}
