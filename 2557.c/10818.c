#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int num[5];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = 0;

    for (i = 0; i < n; i++)
    {
        if (max < num[i])
            max = num[i];
    }

    int min = max;

    for (i = 0; i < n; i++)
    {
        if (num[i] < min)
            min = num[i];
    }
    printf("%d %d", min, max);
}
