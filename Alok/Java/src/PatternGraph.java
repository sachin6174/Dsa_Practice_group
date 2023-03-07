public class PatternGraph {
    public static void main(String[] args) {
        int arr[] = {2,4,7,1,6};
        boolean bool[] = new boolean[5];
        int count = 0;
        while(true){
        for (int i = 0; i < arr.length; i++) {
            if(count == 5){
                System.exit(0);
            }
            if(arr[i] == 0 && !bool[i]){
                bool[i] = true;
                count++;
            }
            if(arr[i] > 0){
                System.out.print("*");
                arr[i]--;
            }else{
                System.out.print(" ");
            }
                    
        }
        System.out.println();
    }
    }
}
