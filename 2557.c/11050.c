#include <stdio.h>

int fact(int n)
{
    int i;
    int result = 1;
    for (i = 1; i <= n; i++)

        result = result * i;
    return result;
}

int main()
{
    int n, k;
    int com;

    scanf("%d %d", &n, &k);

    com = (fact(n)) / (fact(k) * fact(n - k));

    printf("%d", com);

    return 0;
}
