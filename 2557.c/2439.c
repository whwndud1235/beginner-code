#include <stdio.h>

int main()
{
    int i, j, k;
    int n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n; j > i; j--)
            printf(" ");
        for (k = 0; k < i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}