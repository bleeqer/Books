#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max;

	puts("�� ������ �ִ��� ���մϴ�.");
	printf("���� a: "); scanf("%d", &a);
	printf("���� b: "); scanf("%d", &b);
	printf("���� c: "); scanf("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("�ִ��� %d�Դϴ�.\n", max);

	return 0;
}

// ���� ������ ���������� ����Ǵ� ������ ������ ������� ��
// ���� ��� ����� ���� ���� �帧�� �����ϴ� if ���� ���� ������� ��

// ���� ������ >, <, >=, <= 
// � ������ ==, !=
// �� ������ &&, ||, !
