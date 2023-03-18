#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;

	puts("세 정수의 최댓값을 구합니다.");
	printf("정수 a: "); scanf("%d", &a);
	printf("정수 b: "); scanf("%d", &b);
	printf("정수 c: "); scanf("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("최댓값은 %d입니다.\n", max);

	return 0;
}

// 여러 문장이 순차적으로 실행되는 구조를 순차적 구조라고 함
// 식의 평과 결과에 따라 실행 흐름을 변경하는 if 문은 선택 구조라고 함

// 관계 연산자 >, <, >=, <= 
// 등가 연산자 ==, !=
// 논리 연산자 &&, ||, !
