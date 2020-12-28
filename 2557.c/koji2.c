#include <stdio.h>

int main()
{
    int n, i;
    char ch;
    int alpha[26] = {0, };

    printf("input : ");
    scanf("%d \n", &n);

    int index;

    for (i = 0; i < n; i++)
    {
        scanf("%c", &ch);
        if (ch <= 'Z')
            index = ch - 65;// 'A'=65 A
        else
            index = ch - 97;

        printf("%d \n", index);
        alpha[index]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (alpha[i] > 0)
            printf("%c = %d \n", i + 'a', alpha[i]);
    }
}