#include <stdio.h>
void main()
{

	int a[100][100], b[100][100], i, j, r, c, d[100][100];

	printf("Enter the row limit of the matrix");
	scanf("%d", &r);
	printf("Enter the column limit of the matrix");
	scanf("%d", &c);

	printf("Enter the elements of the first matrix");
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);
	printf("Enter the elements of the second matrix");
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &b[i][j]);
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			d[i][j] = a[i][j] + b[i][j];
	printf("sum of the matrix : \n ");

	for (i = 0; i < r; i++)
	{
		printf("\n");
		for (j = 0; j < c; j++)
			printf("%d\t", d[i][j]);
	}
}
