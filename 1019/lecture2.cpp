#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};
int main() {
	int num_student = 0;
	printf("�л��� �Է� : ");
	scanf_s("%d", &num_student);
	struct Student* s;
	s = (struct Student*)malloc(num_student * sizeof(struct Student));
	for (int i = 0; i < num_student; i++) {

		printf("�л� %d-%d �й� �Է�: ", num_student, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("�л� %d-%d �̸� �Է�: ", num_student, i + 1);
		scanf_s("%s", s[i].name, 10);
		printf("�л� %d-%d ���� �Է�: ", num_student, i + 1);
		scanf_s("%d", &(s[i].score));
		printf("\n");
	}
	int sum = 0;
	for (int i = 0; i < num_student; i++) {
		sum += s[i].score;
	}

	free(s);
	s = NULL;

	printf("���� : %d", sum);
	printf("\n");

	return 0;

}