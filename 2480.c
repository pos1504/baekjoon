#include<stdio.h>


int main() 
{
	int dice[3] = {0};

	for(int i=0;i<3;i++)
	scanf_s("%d", &dice[i]);

	if (dice[0] == dice[1] && dice[1] == dice[2] && dice[2] == dice[0])
	{
		printf("%d",10000 + 1000 * dice[0]);
	}
	else if (dice[0] == dice[1] || dice[1] == dice[2] || dice[2] == dice[0])
	{
		for (int i = 0; i < 3; i++)
		{
			int j = i+1;						
			if (j > 2) j = 0;
			if (dice[i] == dice[j])
			{
				printf("%d", 1000 + 100 * dice[i]);
			}
		}
		
	}

	else 
	{
		int max = 0;
		for (int i = 0; i < 3; i++)
		{
			if (dice[i] > max) max = dice[i];
		}

		printf("%d", 100*max);
	}

}