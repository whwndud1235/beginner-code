#include <stdio.h>

int main()
{
    int i, n;
    char str[100];

    printf("input : ");

    int index;
    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (str <= 'Z')
            index = str - 'A';
        else
            index = str - 'a';

        printf("%d", index);
    }

    printf("%s", str);
}