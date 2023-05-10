#include<stdio.h>

int d(int num)
{
	int dnum = 0;
	dnum = num + (num % 10) + ((num % 100) / 10) + ((num % 1000) / 100) + ((num % 10000) / 1000);
	return dnum;
}





int main(void) {
	int count = 1;

	for (int i = 0; i < 10000; i++)
	{
		for (int n = 0; n < 10000; n++)
		{
			
			if ((i + 1) == d(n))
			{
				break;
			}
			count++;
			if (count == 10000)
			{
				printf("%d\n",i+1);
			}
			
		}
		count = 1;
	}
	
	
	
	return 0;
}