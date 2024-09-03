// C program to print factorial using recursion
#include <stdio.h>

unsigned int factorial(unsigned int num)
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
    printf("---Factorial---\n");
    printf("Enter number : ");
    scanf("%d", &n);

    printf("Factorial of %d is : %d", n, factorial(n));
    ;
    return 0;
}
