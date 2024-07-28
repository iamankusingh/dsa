// c program to find minimum value from array
#include <stdio.h>

int main()
{
    int dataArray[] = {36, 15, 7, 59, 36, 14, 25, 20, 78, 30, 45, 54, 23, 45, 67};
    int arraySize = sizeof(dataArray) / sizeof(dataArray[0]);

    int minValue = dataArray[0];

    for (int i = 0; i <= arraySize; i++)
    {
        if (dataArray[i] < minValue)
        {
            minValue = dataArray[i];
        }
    }

    printf("minimum value of array is %d", minValue);
    return 0;
}