#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, total;
    int arr[10] = {0};
    scanf("%d %d %d", &a, &b, &c);

    total=a*b*c;

    while(total != 0)
    {
        arr[total%10]++;
        total/=10;
    }
    for(int i = 0; i<10; i++)
        printf("%d\n", arr[i]);
}
