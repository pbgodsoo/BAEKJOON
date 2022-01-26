#include <stdio.h>

int main()
{
    int l, p, a, b, c, d, e;
    scanf("%d %d", &l, &p);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d %d %d %d %d", a-l*p, b-l*p, c-l*p, d-l*p, e-l*p);
    return 0;
}
