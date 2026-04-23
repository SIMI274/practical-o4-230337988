#include <stdio.h>


void calculateEnergy()
{
	int r, p;
	float energy;
	float total = 0;
	float row3 = 0;
	float avg;

	for(r = 1; r <= 5; r++)
	{
		for(p = 1; p <= 10; p++)
		{
			energy = 500;

			if(r == 2 && p % 2 == 0)
			{
				energy = 0;
			}
			else if(r == 4 && p % 2 != 0)
			{
				energy = 0;
			}
			else if(r == 3 && p >= 1 && p <= 4)
			{
				energy = 125;
			}
			else if(r == 5 && (p == 3 || p == 7 || p == 8))
			{
				energy = 125;
			}

			total = total + energy;

			if(r == 3)
			{
				row3 = row3 + energy;
			}
		}
	}

	avg = total / 50;

	printf("\ntotal energy = %.2f Wh\n", total);
	printf("average per panel = %.2f Wh\n", avg);
	printf("row 3 total energy = %.2f Wh\n", row3);
}


int main()
{
	calculateEnergy();

	return 0;
}
