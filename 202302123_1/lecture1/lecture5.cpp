#include <stdio.h>

int main(void)
{
	int year;

	scanf_s("%d", &year);

	int yy = (year % 4 == 0) && !(year % 100 == 0) && (year % 400 == 0);

	if (yy) 
		printf("�����Դϴ�.\n");
	else
		printf("������ �ƴմϴ�.\n");
	return 0;
}