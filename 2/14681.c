#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    if(a > 0 && b > 0)
        printf("1");
    else if(a > 0 || b > 0)
    {
        if(a > 0)
            printf("4");
        else
            printf("2");
    }
    else
        printf("3");

}
