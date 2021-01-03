#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = n; i > 0; i--)
        if (n > 0 && n <= 100000)
            printf("%d \n", i);
}