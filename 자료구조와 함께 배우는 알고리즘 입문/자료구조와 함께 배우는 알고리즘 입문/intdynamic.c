#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* x;
	x = calloc(1, sizeof(int)); // 1���� int�� ũ�⸸ŭ ���� �޸� �Ҵ� / calloc�� ���ӵ� �޸� �ּ��� ���� �ּҸ� ��ȯ�ϹǷ� arrayó�� ��� ����

	if (x == NULL)
	{
		puts("failed to allocate memory.");
	}
	else
	{
		*x = 57;
		printf("x = %d\n", *x);
		free(x); // �Ҵ� ����
	}
}