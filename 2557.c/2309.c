#include <stdio.h>

int main()
{
    int dwarf[9];
    int i, j;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &dwarf[i]);
    }
    int temp;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 9; j++)
        {
            if (dwarf[i] > dwarf[j])
            {
                temp = dwarf[j];
                dwarf[j] = dwarf[i];
                dwarf[i] = temp;
            }
        }
    }
    int sum = 0;
    int check1 = 0;
    int check2 = 0;
    for (i = 0; i < 9; i++)
    {
        sum += dwarf[i];
        for (j = 0; j < 9; j++)
        {
            if (sum - dwarf[i] - dwarf[j] == 100)
            {
                printf("%d,%d\n", dwarf[i], dwarf[j]);
                check1 = i;
                check2 = j;
            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        if (i != check1 && i != check2)
            printf("%d\n", dwarf[i]);
    }
}
