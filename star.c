#include <stdio.h>
void main()
{
	int star, x, y, counter;
	printf("Enter A Number : ");
	scanf("%d", &star);
	x = 0;
	while (x < star)
	{
		printf("*");
		counter = 0;
		while (counter < x)
		{
			printf("*");
			counter = counter + 1;
		}
		x = x + 1;
		printf("\n");
	}
}
