// Bubble sort algorithm in java
public class BubbleSort {

    static void bubbleSort(int array[], int size) {
        for (int i = 0; i < size - 1; i++) {
            boolean terminateLoop = true;

            for (int j = 0; j < size - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                    terminateLoop = false;
                }
            }
            if (terminateLoop) {
                break;
            }
        }

        System.out.print("Bubble sort array is : ");
        for (int i : array) {
            System.err.print(i + " ");
        }
    }

    public static void main(String[] args) {
        int[] array = new int[] { 4, 12, 8, 9, 16, 10, 2 };
        int size = array.length;

        System.out.print("Orignal array is : ");
        for (int i : array) {
            System.out.print(i + " ");
        }
        System.out.println("\n");

        bubbleSort(array, size);
    }
}