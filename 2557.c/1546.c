#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;

    scanf("%d", &n); //과목수 입력

    int grade[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &grade[i]); //성적입력
    }

    int max = 0;

    for (i = 0; i < n; i++)
    {
        if (max < grade[i])
        {
            max = grade[i];
            //최대값 설정
        }
    }

    double new[n];

    for (i = 0; i < n; i++)
    {
        new[i] = (((double)grade[i] / (double)max) * 100);
    }

    double sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += new[i];
    }
    printf("%.2lf", (double)sum / n);
}