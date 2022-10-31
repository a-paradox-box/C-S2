#include <stdio.h>
void main()
{
	int r, c, a[100][100], i, j, small;
	printf("Enter row limit");
	scanf("%d", &r);
	printf("Enter column limit");
	scanf("%d", &c);

	printf("Enter the Elements ");

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	small = a[0][0];

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			if (a[i][j] < small)
				small = a[i][j];
	printf("The smallest number =%d", small);
}
