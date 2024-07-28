// java program to find minimum value from array
public class MinVal {

    public static void main(String[] args) {
        int[] dataArray = {36, 15, 7, 59, 36, 14, 25, 20, 78, 30, 45, 54, 23, 45, 67};
        int minVal = dataArray[0];

        for (int i : dataArray) {
            if(i < minVal) {
                minVal = i;
            }
        }

        System.out.print("minimum value is ");
        System.out.print(minVal);
    }
}