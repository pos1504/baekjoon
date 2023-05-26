#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	int N;
	char arr[100][100] = { 0 };
	char temp[100] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", &arr[i]);
	}
	strcpy(temp, arr[0]);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 100; j++) {
			if (temp[j] == '\0') {
				continue;
			}
			if (temp[j] != arr[i][j]) {
				temp[j] = '?';
			}

		}

	}
	printf("%s", temp);
}