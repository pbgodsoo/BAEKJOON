#include <stdio.h>

int main()
{
    int a, b, c;
    int i = 0;
    scanf("%d", &a);
    c = a;
    while(1)
    {
        b = a/10 + a%10;
        a = a%10*10+b%10;
        i++;
        if(a == c)
            break;
    }
    printf("%d", i);
}
