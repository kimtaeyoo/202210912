	#include <stdio.h>
int main(void)
{
	int a = 0, b = 0;
	printf("2���� ������ �Է����ּ���:");
	scanf("%d %d", &a, &b);
	printf("%d & %d = %d\n", a, b, a & b);
	printf("%d | %d = %d\n", a, b, a | b);
	printf("%d ^ %d = %d", a, b, a ^ b);
	return 0;
}