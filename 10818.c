#include <stdio.h>

int main()
{
    int n, a, min, max;
    scanf("%d", &n);
    for (int i = 0; i<n; i++)
    {
        scanf("%d", &a);
        if(i == 0)
        {
            min = a;
            max = a;
        }
        if(min>a)
            min = a;
        if(max<a)
            max = a;
    }
    printf("%d %d", min, max);
}
