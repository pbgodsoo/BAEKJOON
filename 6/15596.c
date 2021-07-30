/*
#include <stdio.h>

int a[5] = {1, 2, 3, 4, 5};
*/
long long sum(int *a, int n)
{
    long long s = 0;
    for(int i=0; i<n; i++)
        s += a[i];
    return s;
}
/*
int main()
{
    int n=5;

    printf("%d\n", sum(a, n));
}
*/
