#include <stdio.h>
void main()
{
    int small, i, example[10];

    printf("Enter The Elements Of The Array\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &example[i]);

    small = example[0];

    for (i = 0; i < 10; i++)
    {
        if (small > example[i])
            small = example[i];
    }
    printf("The Smallest Number is %d\n", small);
}