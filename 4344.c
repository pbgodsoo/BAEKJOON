#include <stdio.h>

int main()
{
    int n, s, c, t, sum;
    float avg;
    int score[1000] = {0};
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        sum = 0;
        t = 0;
        scanf("%d", &c);
        for(int j=0; j<c; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (float)sum/c;

        for(int j=0; j<c; j++)
        {
            if(score[j]>avg)
                t++;
        }
        printf("%.3f%%\n", (float)t/c*100);
    }
}
