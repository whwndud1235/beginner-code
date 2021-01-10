#include <stdio.h>

int main()
{
    int N, K, i;
    
    scanf("%d %d", &N, &K);
    
    int answer[N];
    int k = 0;
    int count = 0;

    for (i = 1; i <= N; i++)
    {
        if (N % i != 0)
            continue;
        if (N % i == 0)
            answer[k] = i;
        k++;  //인덱스 교환
        count++; //약수갯수
    }
    if (count < K)  //약수갯수가 더 적으면
        printf("0\n");
    else
        printf("%d\n", answer[K - 1]);
}