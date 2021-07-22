#include<stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	b = a;
	for (int i = 0; i <b; i++)
	{
		printf("%d\n", a);
		a--;
	}
}
