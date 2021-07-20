#include <stdio.h>

int main()
{
    int a, b;
    double c;

    c = (double)a/b;
    scanf("%d %d", &a, &b);
    printf("%.10f", (double) a/b);
}
