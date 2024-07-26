#include <stdio.h>

int main()
{
    int first = 0;
    int second = 1;

    printf("%d\n", first);
    printf("%d\n", second);

    for (int i = 1; i <= 18; i++)
    {
        int cur = first + second;
        printf("%d\n", cur);
        second = first;
        first = cur;
    }
}