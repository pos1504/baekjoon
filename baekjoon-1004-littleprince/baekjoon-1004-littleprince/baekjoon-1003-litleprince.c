#include<stdio.h>
#include<math.h>

int main() {
	int T, N = 0;
	double x_1, y_1, x_2, y_2;
	double c_x, c_y, c_r;

	double d_1, d_2;
	int count[100] = { 0 };
	//distance = sqrt(pow((x_1 - c_x), 2) + pow((y_1 - c_y), 2));
	scanf_s("%d", &T);
	int i = 0;

	while (T--) {
		
		scanf_s("%lf %lf %lf %lf", &x_1, &y_1, &x_2, &y_2);
		scanf_s("%d", &N);
		int tempCount = 0;
		//printf("T : %d\n", T);
		while (N--) {

			//printf("N : %d\n", N);
			scanf_s("%lf %lf %lf", &c_x, &c_y, &c_r);

			d_1 = sqrt(pow((x_1 - c_x), 2) + pow((y_1 - c_y), 2));
			d_2 = sqrt(pow((x_2 - c_x), 2) + pow((y_2 - c_y), 2));

			if ((d_1 <= c_r && d_2 > c_r) || (d_1 > c_r && d_2 <= c_r)) {
				tempCount++;

			}

			if (N == 0) {
				count[i] = tempCount;
				i++;
			}

		}
	}

	for (int j = 0; j < i; j++) {

		printf("%d\n", count[j]);

	}
	exit(0);
	return 0;



}