#include<stdio.h>

int main() {
	int N=0, F=0;
	int temp=0;
	scanf_s("%d", &N);
	scanf_s("%d", &F);


	N = (N / 100)*100;
	for (int i = 0; i < 100; i++) {
		
		if (N % F == 0)break;
		N++;
		temp++;
	}
	if (temp < 10)printf("0%d", temp);
	else printf("%d", temp);
	
}