#include <stdio.h>

long long c[30][30];

void combination()
{
	for (int i = 1; i < 30; i++)
    {
		c[i][i] = 1;
		c[i][1] = i;
	}
	for (int i = 2; i < 30; i++)
	{
		for (int j = 2; j < 30; j++)
		{
			if (i>j)
				c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
		}
	}
}

int main()
{
    int t, n, m;
    scanf("%d", &t);

    combination();

    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &n, &m);
        printf("%d\n", c[m][n]);
    }
    return 0;
}
