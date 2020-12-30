#include <stdio.h>

int main()
{
    int a[8];
    int i;

    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    int mel = 0;

    for (i = 0; i < 8; i++)
    {
        if (a[i] - a[i + 1] == -1)
            mel = -1;
        else if (a[i] - a[i + 1] == 1)
            mel = 1;
        else
            mel = 0;
        break;
    }

    if (mel == -1)
        printf("ascending");
    if (mel == 1)
        printf("descending");
    if (mel == 0)
        printf("mixed");

        return 0;
}