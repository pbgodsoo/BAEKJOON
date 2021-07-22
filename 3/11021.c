#include <stdio.h>

int main()
{
    int n, a, b;
    int j = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        j++;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", j, a+b);
    }
}
