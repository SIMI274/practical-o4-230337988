#include <stdio.h>

int main()
{
	int days;
	int pushups[7];
	int i;
	int total = 0;
	float avg;
	int big;
	int bigDay;

	printf("enter how many days: ");
	scanf("%d", &days);

	for(i = 0; i < days; i++)
	{
		printf("day %d pushups: ", i+1);
		scanf("%d", &pushups[i]);
		total = total + pushups[i];
	}

	avg = (float)total / days;

	big = pushups[0];
	bigDay = 0;

	for(i = 1; i < days; i++)
	{
		if(pushups[i] > big)
		{
			big = pushups[i];
			bigDay = i;
		}
	}

	printf("\nTotal pushups: %d\n", total);
	printf("Average pushups per day: %.2f\n", avg);
	printf("Most pushups on day %d\n", bigDay + 1);

	return 0;
}
