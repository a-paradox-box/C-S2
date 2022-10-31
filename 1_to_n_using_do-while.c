#include <stdio.h>
void main()
{
	int a, i = 0;
	printf("enter the limit");
	scanf("%d", &a);
	do
	{
		printf("%d\n", i);
		i = i + 1;
	} while (i <= a);
}
