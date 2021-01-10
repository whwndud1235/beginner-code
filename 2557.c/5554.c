#include <stdio.h>

int main()
{
    int a,b,c,d;
    int time;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    time = a+b+c+d;
    printf("%d\n",time/60);
    printf("%d",time%60);
}