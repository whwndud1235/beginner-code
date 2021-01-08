#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char S[100];
    char alpha[26];

    for (i = 0; i < 26; i++)
    {
        alpha[i] = -1;
    }

    scanf("%s", S);

    for (i = 0; i < strlen(S); i++)
    {
        if (alpha[S[i] - 97] == -1)
            alpha[S[i] - 97] = i;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%d ", alpha[i]);
    }
    return 0;
}