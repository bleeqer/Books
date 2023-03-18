#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* x;
	x = calloc(1, sizeof(int)); // 1개의 int형 크기만큼 동적 메모리 할당 / calloc은 연속된 메모리 주소의 시작 주소를 반환하므로 array처럼 사용 가능

	if (x == NULL)
	{
		puts("failed to allocate memory.");
	}
	else
	{
		*x = 57;
		printf("x = %d\n", *x);
		free(x); // 할당 해제
	}
}