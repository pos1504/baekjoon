#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int testcase;
	
	int* studentscore;



	scanf_s("%d", &testcase);

	for (int i = 0; i < testcase; ++i) {
		
		int N = 0;
		int SUM = 0;
		float count = 0;
		float ratio = 0;
		scanf_s("\n%d ", &N);
		studentscore = (int *)malloc(sizeof(int) * N);
		
		for (int i = 0; i < N; ++i){
			scanf_s("%d ", &studentscore[i]);
			SUM += studentscore[i];
		}
		for (int i = 0; i < N; ++i) {
			if (studentscore[i] > (SUM / N))
				count++;
		}
		ratio = 100 * count / N;
		printf("%.3f%%\n", ratio);
		free(studentscore);


	}



	return 0;
}