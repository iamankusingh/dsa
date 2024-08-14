// Bubble sort algorithm in c
#include <stdio.h>
#include <stdbool.h>

int bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool terminateLoop = true;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                terminateLoop = false;
            }
        }

        if (terminateLoop)
        {
            break;
        }
    }

    printf("Bubble sort array is ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

int main()
{
    int array[] = {5, 12, 6, 7, 2, 11, 3};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Orignal array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    bubbleSort(array, size);
}