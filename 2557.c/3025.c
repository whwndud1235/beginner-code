#include <stdio.h>

int main()
{
    int i,j;
    int arr[10];
    int result =0;

    int mod[10] = {0, };   

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        mod[i] = arr[i] % 42;  //나머지 값 대입
    }
    for (i = 0; i < 10; i++)
    {
        int cnt = 0;  //cnt 초기화
        for (j = 0; j < i; j++)
            {
            if (mod[i] == mod[j])
                cnt++; //값이 같으면 cnt 올려서 result 증가 x
            }
            if (cnt ==0)  //값이 다르면 result 증가
                result++;
    }
    printf("%d ",result);
}