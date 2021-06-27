#include <stdio.h>
#include <string.h>

int main()
{
    int n, k, sum;
    char arr[81];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum = 0, k = 0;
        scanf("%s", arr);
        for (int j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == 'O')
            {
                k++;
                sum += k;
            }
            else
            {
                sum += 0;
                k = 0;

            }
        }
        printf("%d\n", sum);
    }
}
