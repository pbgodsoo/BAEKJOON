#include <stdio.h>

int self_num(){
    int i, res = 0;
    int arr[10001] = {0};
    for (i = 1; i <= 10000; i++)
    {
        if(i < 10)
        {
            res = i+i;
            arr[res] = 1;
        }
        else if(i < 100)
        {
            res = i + (i/10) + (i%10);
            arr[res] = 1;
        }
        else if(i < 1000)
        {
            res = i + (i/100) + ((i%100)/10) + ((i%100)%10);
            arr[res] = 1;
        }
        else if(i < 10000)
        {
            res = i + (i/1000) + ((i%1000)/100) + (((i%1000)%100)/10) + (((i%1000)%100)%10);
            if (res <= 10000)
                arr[res] = 1;
        }
    }

    for(i = 1; i <= 10000; i++)
    {
        if(arr[i] != 1)
            printf("%d\n", i);
    }
    return 0;
}

int main()
{
    self_num();
    return 0;
}


