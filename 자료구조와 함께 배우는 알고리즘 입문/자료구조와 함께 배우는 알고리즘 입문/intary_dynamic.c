#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int* a;
	int na;
	printf("nums of elements: ");
	scanf("%d", &na);

	a = calloc(na, sizeof(int)); // na의 값을 입력받아 그 갯수만큼 동적 메모리 할당

	if (a == NULL)
	{
		puts("failed to allocate memory.");
	}
	else
	{
		printf("Enter %d of integers. \n", na);
		for (i = 0; i < na; i++)
		{
			printf("a[%d]: ", i);
			scanf("%d", &a[i]);
		}

		printf("The contents of the array a: \n");
		for (i = 0; i < na; i++)
		{
			printf("a[%d] = %d\n", i, a[i]);
		}
	}
}