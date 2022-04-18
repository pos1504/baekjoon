#include<stdio.h>


int main() {

	int hour, min;
	int input_min;

	scanf_s("%d %d", &hour, &min);
	scanf_s("%d", &input_min);

	min += input_min;

	if (min >= 60)
	{
		for (min; min >= 60; min -= 60)
		{
			hour++;

		}
	}

	if (hour >= 24)
	{
		for (hour; hour >= 24; hour -= 24)
		{


		}
	}
	printf("%d %d", hour, min);

}