#include <stdio.h>

int main()
{
    int i;

    int num[5];
    int square = 0;
    int N;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);

        square += num[i] * num[i];

        N = square % 10;
    }
    printf("%d", N);
    return 0;
}