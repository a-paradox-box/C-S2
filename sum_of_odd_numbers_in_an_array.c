#include <stdio.h>
void main()
{
	int sum, i, odd[11];
	printf("Enter");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &odd[i]);
		if (odd[i] % 2 != 0)
			sum = sum + odd[i];
	}
	printf("sum=%d", sum);
}
