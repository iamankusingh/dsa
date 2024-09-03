// Bubble sort algorithm in c++
#include <iostream>
#include <array>

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

    std::cout << "Bubble sort array ";
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }

    return 0;
}

int main()
{
    int array[] = {16, 4, 8, 12, 24, 4, 9};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "Orignal array is : ";
    for (int i : array)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    bubbleSort(array, size);
}