#include <stdio.h>

int main(void)
{
	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num > 0)
		printf("���� ���� (%d)\n", num);
	else if (num < 0)
		printf("���� ���� (%d)\n", num);
	else
		printf("0�Դϴ�.\n", num);
	return 0;
}