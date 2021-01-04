#include <stdio.h>
#include <string.h>

int main()
{
    int T, i,j;
    char S[80];

    scanf("%d", &T); //테스트케이스

    for (i = 0; i < T; i++)
    {
        scanf("%s", S); //test case 만큼 OX배열 입력

        int cnt = 0;
        int sum = 0;

        for (j = 0; j < strlen(S); j++) //문자열 길이만큼 반복
        {
            if (S[j] == 'O')
            {
                cnt++;      //count 증가
                sum += cnt; //sum에 쌓기
            }
            if (S[j] == 'X')
                cnt = 0; //count 초기화
        }
        printf("%d\n", sum);
    }
    return 0;
}
