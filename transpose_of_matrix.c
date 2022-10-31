#include <stdio.h>
void main()
{

	int a[100][100], b[100][100], i, j, r, c;

	printf("Enter the row limit of the matrix");
	scanf("%d", &r);
	printf("Enter the column limit of the matrix");
	scanf("%d", &c);

	printf("Enter the elements of the matrix");
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			b[i][j] = a[j][i];

	printf("The transpose of matrix : \n");

	for (i = 0; i < r; i++)
	{
		printf("\n");
		for (j = 0; j < c; j++)
			printf("%d\t", b[i][j]);
	}
}
