#include <stdio.h>
void main()
{
	int a, i = 0;
	printf("enter the limit");
	scanf("%d", &a);
	while (i <= a)
	{
		printf("%d\n", i);
		i = i + 1;
	}
}
