#include <stdio.h>
#include <set>

using namespace std;

int main()
{
    int i, n;
    scanf("%d", &n);
    
    set<int> s;
    set<int>::iterator iter;   

    for (i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
            s.insert(a);
    }
    for (iter = s.begin(); iter != s.end(); iter++) // 5 4 3 2 1 
    {
        printf("%d\n", *iter);
    }
}