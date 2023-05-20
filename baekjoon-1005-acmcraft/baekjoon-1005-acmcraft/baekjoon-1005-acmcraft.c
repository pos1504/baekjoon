#include<stdio.h>
#include<stdlib.h>
struct Build {
	int time;
	int next;
	int prev;
};

int main(void) {
	struct Build* build = { 0 };
	int T, K, N = 0;


	scanf_s("%d\n", &T);

	while (T--) {
		int target;
		scanf_s("%d %d\n", &N, &K);//건물개수, 건설순서규칙개수
		build = malloc(sizeof(struct Build) * K);
		if (build != NULL) {  // malloc 함수는 실패시 NULL을 반환합니다.
			for (int i = 0; i < K; i++) {
				scanf_s("%d ", &build->time);
				
			}
			for (int i = 0; i < K; i++) {
				scanf_s("%d %d\n", &build->prev, &build->next);
			}
		}
		scanf_s("%d", &target);

		

		free(build);

	}

}