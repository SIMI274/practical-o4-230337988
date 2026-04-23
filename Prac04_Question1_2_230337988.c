#include <stdio.h>


float calculateAverage(int tot, int d)
{
	float av;
	av = (float)tot / d;
	return av;
}


void displayResults(int arr[], int d, int tot)
{
	int i;
	int big = arr[0];
	int bigDay = 0;
	float av;

	av = calculateAverage(tot, d);

	for(i = 1; i < d; i++)
	{
		if(arr[i] > big)
		{
			big = arr[i];
			bigDay = i;
		}
	}

	printf("\nTotal pushups for the week: %d\n", tot);
	printf("Average pushups per day: %.2f\n", av);
	printf("You did the most pushups on day %d\n", bigDay + 1);
}


int main()
{
	int days;
	int pushups[7];
	int i;
	int total = 0;

	printf("enter how many days: ");
	scanf("%d", &days);

	for(i = 0; i < days; i++)
	{
		printf("day %d pushups: ", i+1);
		scanf("%d", &pushups[i]);
		total = total + pushups[i];
	}

	displayResults(pushups, days, total);

	return 0;
}
