// Selection sort algorithm in c
#include <stdio.h>

// sorting function
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int smalIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[smalIndex] > arr[j])
            {
                smalIndex = j;
            }
        }
        // swap
        int temp = arr[smalIndex];
        arr[smalIndex] = arr[i];
        arr[i] = temp;
    }

    // to print the sorted array
    printf("Selection sort array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Main function
int main()
{
    int array[] = {7, 8, 4, 9, 3};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Orignal array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    selectionSort(array, size);
}