#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int FindAlphabet()
{
	char string[100] = { 0, };//초기화 해주자
	int AZstring[26] = { 0, };//초기화 해주자
	scanf("%s", string);


	for (int i = 0; i < 26; i++) 
	{
		AZstring[i] = -1;    //AZstring -1로 전부 초기화
	}
	

	for (int i = 0; i <100  ; i++) /
	{
		for (int j = 97; j <= 122; j++)
		{
			if ((int)string[i] == j) 
			{
				if (AZstring[j - 97] != -1) break; //첫번째 등장한 알파벳의 배열 위치를 선정하기위해 break
				AZstring[j-97] = i;
			}
			
		}


	}

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", AZstring[i]);
	}


	return 0;

}