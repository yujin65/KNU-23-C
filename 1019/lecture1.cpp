#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num_student = 0;
	int* score;
	float ave = 0;
	printf("학생수 입력 : ");
	scanf_s("%d", &num_student);
	score = (int*)malloc(num_student * sizeof(int));
	
	for (int i = 0; i < num_student; i++) {
		printf("학생 %d-%d 성적 입력: ", num_student, i + 1);
		scanf_s("%d", score + i);
	}
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += score[i];
	}
	printf("총점 : %d", sum);
	printf("\n");

	for (int k = 0; k < num_student; k++) {
		printf("학생 # %d-%d 성적 출력 : %d \n ", num_student, k + 1, score[k]);
	}
	ave = float(sum) / num_student;
	printf("평균 점수 : %.2f", ave);

	free(score);
	score = NULL;
	
	return 0;
}