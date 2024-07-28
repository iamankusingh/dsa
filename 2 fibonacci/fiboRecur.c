#include <stdio.h>

int counter = 2;

void fibo(int first, int second)
{
    if (counter <= 15)
    {
        int cur = first + second;
        printf("%d\n", cur);
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
    printf("0\n");
    printf("1\n");
    fibo(1, 0);

    return 0;
}