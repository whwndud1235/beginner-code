#include <stdio.h>

int main()
{
    int T;
    int a, b;
    scanf("%d", &T);

    int sum;
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);

        sum = a + b;
        printf("%d\n", sum);
    }
    return 0;
}