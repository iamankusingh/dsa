// c++ program to find minimum value from array
#include <iostream>

int main()
{
    int dataArray[] = {36, 15, 7, 59, 36, 14, 25, 20, 78, 30, 45, 54, 23, 45, 67};

    int minValue = dataArray[0];

    for (int i : dataArray)
    {
        if (i < minValue)
        {
            minValue = i;
        }
    }

    std::cout << "minimum value is " << minValue;
    return 0;
}