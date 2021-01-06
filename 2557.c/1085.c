#include <stdio.h>

int main()
{
    int x, y, w, h;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    if (w - x > h - y)
    {
        if (h - y > x)
        {
            if (x > y)
                printf("%d", y);
            else
                printf("%d", x);
        }
        else if (h - y > y)
            printf("%d", (y > x) ? x : y);
        else
        {
            printf("%d", h - y);
        }
    }
    if (w - x < h - y)
    {
        if (w - x > x)
        {
            if (x > y)
                printf("%d", y);
            else
                printf("%d", x);
        }
        else if (w - x > y)
            printf("%d", (x > y) ? y : x);
        else
            printf("%d", w - x);
    }
}