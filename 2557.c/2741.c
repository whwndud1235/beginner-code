#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=1;i<=n;i++)
       {
        if (0 < n && n < 100000)
            printf("%d\n", i);
            else
            {
                break;
            }     
    }
    return 0;
}