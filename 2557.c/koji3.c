#include <stdio.h>

void swap(int *px, int *py)
{
    int tmp;
    
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main()
{
    int x =2;
    int y =11;
    printf("swap() a=%d b=%d \n",x,y);
    swap(&x,&y);
    printf("%d %d", x,y);
}