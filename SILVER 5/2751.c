#include <stdio.h>
#include <stdlib.h>

int num[1000001] = {0};

int compare(const void *a, const void *b) {
	if (*(int *)a > *(int *)b)
		return 1;
	else if (*(int *)a < *(int *)b)
		return -1;
	else
		return 0;
}

int main() {
	int N;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);

	qsort(num, N, sizeof(int), compare);

	for (int i = 0; i < N; i++)
		printf("%d\n", num[i]);

	return 0;
}
