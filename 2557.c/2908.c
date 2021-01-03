#include <stdio.h>

int main()
{
    int a, b;
    int i;

    scanf("%d %d", &a, &b);

    int new_a = 0;
    int new_b = 0;

    for (i = 0; i < 3; i++)
    {
        new_a = new_a * 10;
        new_a = new_a + a % 10;
        a = a / 10;
    }

    for (i = 0; i < 3; i++)
    {
        new_b = new_b * 10;
        new_b = new_b + b % 10;
        b = b / 10;
    }

    if (new_a > new_b)
        printf("%d", new_a);
    else if (new_a < new_b)
        printf("%d", new_b);
    return 0;
}