#include <stdio.h>

int main()
{
    int arr[9];
    int a, n;
    int max = 0;
    for(int i = 0; i<9; i++)
    {
        scanf("%d", &arr[i]);
        if(max<arr[i])
        {
            max=arr[i];
            n = i+1;
        }
    }
    printf("%d\n", max);
    printf("%d\n", n);
}
