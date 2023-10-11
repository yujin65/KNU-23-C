#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {

	double x = 0;
	double y = 0;

	int count = 0, circle = 0;

	int percent = 0;
	double pi;

	srand(time(NULL));

	while (count < 100000) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if (pow(x,2)+pow(y,2) <= 1) {
			circle++;
		}

		pi = 4.0 * circle / (count + 1);
		percent = count / 1000;

		printf("%d%%진행.. 원주율 : %lf\n", percent, pi);
	}
	return 0;
}