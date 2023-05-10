#include<stdio.h>
#include<malloc.h>
#include<math.h>

int sumofnum() {
	
	int ArraySize,arrinput;
	
	int ArraySum = 0;

	scanf_s("%d", &ArraySize); 

	

	

	for (int i = 0; i < ArraySize;i++)  
	{
	
		scanf_s("%1d", &arrinput); // %1d일때 나는 정수 1개만 입력을받겠다!라는 뜻

		ArraySum += arrinput;
	}



	printf("%d", ArraySum);
	
	return 0;
}