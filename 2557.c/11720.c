#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    char arr[n];
    int sum = 0;

    scanf("%s", &arr);

    for (i = 0; i < n; i++)
    {
        sum += (arr[i] - '0');
    }
    printf("%d", sum);
}