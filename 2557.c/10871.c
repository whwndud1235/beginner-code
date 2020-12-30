#include <stdio.h>

int main()
{
    int n,k;
    int i;

    scanf("%d %d",&n,&k);

    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(k>arr[i])
        printf("%d ",arr[i]);
    }
    return 0;
}