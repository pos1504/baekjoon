#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int FindAlphabet()
{
	char string[100] = { 0, };//�ʱ�ȭ ������
	int AZstring[26] = { 0, };//�ʱ�ȭ ������
	scanf("%s", string);


	for (int i = 0; i < 26; i++) 
	{
		AZstring[i] = -1;    //AZstring -1�� ���� �ʱ�ȭ
	}
	

	for (int i = 0; i <100  ; i++) /
	{
		for (int j = 97; j <= 122; j++)
		{
			if ((int)string[i] == j) 
			{
				if (AZstring[j - 97] != -1) break; //ù��° ������ ���ĺ��� �迭 ��ġ�� �����ϱ����� break
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