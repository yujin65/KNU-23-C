#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("1. 정수 입력.");
	scanf_s("%d", &num);
	printf("2. 키보드로 입력받은 값은 %d입니다.\n", num);
	return 0;
}
