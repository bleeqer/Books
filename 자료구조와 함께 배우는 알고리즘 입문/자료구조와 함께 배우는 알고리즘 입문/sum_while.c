#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� �� : ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i++;
	}

	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return 0;
}