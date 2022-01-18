#include <stdio.h>

int hannum(int n)
{
    int count = 0;
    int f,s,t;
    for(int i = 1; i<=n; i++)
    {
        if(i<100)
        {
            count++;
        }
        else if(i<1000)
        {
            f = i/100;
            s = (i%100)/10;
            t = (i%100)%10;
            if(f-s == s-t)
                count++;
        }
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", hannum(n));
    return 0;
}
