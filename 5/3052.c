#include <stdio.h>

int main()
{
    int arr[10] = {0};
    int t[42] = {0};
    int c = 0;

    for(int i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        t[arr[i]%42]++;
    }
    for(int i=0; i<42; i++)
    {
        if(t[i]>0)
            c++;
    }
    printf("%d", c);
}
