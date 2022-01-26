#include <stdio.h>

int main()
{
    int k, q, l, b, n, p;
    int k2, q2, l2, b2, n2, p2;
    k = 1;
    q = 1;
    l = 2;
    b = 2;
    n = 2;
    p = 8;

    scanf("%d %d %d %d %d %d", &k2, &q2, &l2, &b2, &n2, &p2);
    printf("%d %d %d %d %d %d", k-k2, q-q2, l-l2, b-b2, n-n2, p-p2);
    return 0;
}
