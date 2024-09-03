// C++ program to print factorial using recursion
#include <iostream>

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int n;
    std::cout << "---FACTORIAL---" << std::endl;
    std::cout << "Enter number : ";
    std::cin >> n;

    std::cout << "factorial of " << n << " is : " << factorial(n);
}
