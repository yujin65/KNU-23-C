#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};
int main() {
	int num_student = 0;
	printf("학생수 입력 : ");
	scanf_s("%d", &num_student);
	struct Student* s;
	s = (struct Student*)malloc(num_student * sizeof(struct Student));
	for (int i = 0; i < num_student; i++) {

		printf("학생 %d-%d 학번 입력: ", num_student, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("학생 %d-%d 이름 입력: ", num_student, i + 1);
		scanf_s("%s", s[i].name, 10);
		printf("학생 %d-%d 성적 입력: ", num_student, i + 1);
		scanf_s("%d", &(s[i].score));
		printf("\n");
	}
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += s[i].score;
	}

	free(s);
	s = NULL;

	printf("총점 : %d", sum);
	printf("\n");

	return 0;

}