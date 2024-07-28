#include <iostream>

int counter = 2;

void fibo(int first, int second)
{
    if (counter <= 15)
    {
        int cur = first + second;
        std::cout << cur << std::endl;
        second = first;
        first = cur;
        counter += 1;
        fibo(first, second);
    }
    else
    {
        return;
    }
}

int main()
{
    std::cout << 0 << std::endl;
    std::cout << 1 << std::endl;

    fibo(1, 0);
    return 0;
}