#include <iostream>

int main()
{
    int first = 0;
    int second = 1;

    std::cout << first << std::endl;
    std::cout << second << std::endl;

    for (int i = 0; i < 19; i++)
    {
        int cur = first + second;
        std::cout << cur << std::endl;
        second = first;
        first = cur;
    }
}