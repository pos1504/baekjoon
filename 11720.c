#include<stdio.h>
#include<malloc.h>
#include<math.h>

int sumofnum() {
	
	int ArraySize,arrinput;
	
	int ArraySum = 0;

	scanf_s("%d", &ArraySize); 

	

	

	for (int i = 0; i < ArraySize;i++)  
	{
	
		scanf_s("%1d", &arrinput); // %1d�϶� ���� ���� 1���� �Է����ްڴ�!��� ��

		ArraySum += arrinput;
	}



	printf("%d", ArraySum);
	
	return 0;
}