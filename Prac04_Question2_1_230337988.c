#include <stdio.h>

int main()
{
	int rows, panels;
	int r, p;
	int count = 0;
	float mins;

	printf("how many rows: ");
	scanf("%d", &rows);

	printf("how many panels per row: ");
	scanf("%d", &panels);

	printf("\n");

	for(r = 1; r <= rows; r++)
	{
		for(p = 1; p <= panels; p++)
		{
			printf("Cleaning panel [%d]-[%d]... Done.\n", r, p);
			count = count + 1;
		}
	}

	mins = (count * 30) / 60.0;

	printf("\npanels cleaned: %d\n", count);
	printf("time taken: %.2f minutes\n", mins);

	return 0;
}
