#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, max=0;
    float sum=0;
    float arr[1000]={0};

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%f", &arr[i]);
        if(arr[i]>max)
            max = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        arr[i] = (float)arr[i]/max*100;
        sum += arr[i];
    }
    printf("%f", sum/n);
}
