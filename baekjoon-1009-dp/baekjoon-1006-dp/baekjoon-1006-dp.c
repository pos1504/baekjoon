#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int T=0;
	int a=0,b=0;
	
	scanf_s("%d",&T);
	for (int i = 0; i < T; i++) {
		scanf_s("%d %d", &a, &b);
		int result = a;
		b = b % 4 + 4;
		for (int i = 1; i < b; i++) {
			result = (result * a)%10;
		
		}
	
		if (result  == 0) { printf("10\n"); }
		else printf("%d\n", result );
	}

	
		
}