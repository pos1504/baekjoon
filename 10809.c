#include<stdio.h>


char FindAlphabet()
{
	char string[110];

	scanf_s("%s", string,110);

	for (int i = 0; i <=100  ; i++)
	{
		for (int j = 97; j <= 122; j++)
		{
			if ((int)string[i] == j)
			{
				printf("%d ", i);
			}
			
		}


	}



}