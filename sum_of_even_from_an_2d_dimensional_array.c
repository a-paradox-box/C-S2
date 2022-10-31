#include <stdio.h>
void main()
{
	int r, c, a[100][100], i, j, sum = 0;
	printf("Enter row limit");
	scanf("%d", &r);
	printf("Enter column limit");
	scanf("%d", &c);

	printf("Enter the Elements ");

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			if (a[i][j] % 2 == 0)
				sum = sum + a[i][j];
	printf("The sum of even numbers =%d", sum);
}
