#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num_student = 0;
	int* score;
	float ave = 0;
	printf("�л��� �Է� : ");
	scanf_s("%d", &num_student);
	score = (int*)malloc(num_student * sizeof(int));
	
	for (int i = 0; i < num_student; i++) {
		printf("�л� %d-%d ���� �Է�: ", num_student, i + 1);
		scanf_s("%d", score + i);
	}
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += score[i];
	}
	printf("���� : %d", sum);
	printf("\n");

	for (int k = 0; k < num_student; k++) {
		printf("�л� # %d-%d ���� ��� : %d \n ", num_student, k + 1, score[k]);
	}
	ave = float(sum) / num_student;
	printf("��� ���� : %.2f", ave);

	free(score);
	score = NULL;
	
	return 0;
}