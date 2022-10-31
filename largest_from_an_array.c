#include <stdio.h>
void main()
{
    int big, i, example[10];

    printf("Enter The Elements Of The Array\n");

    for (i = 0; i < 10; i++)
        scanf("%d", &example[i]);

    big = example[0];

    for (i = 0; i < 10; i++)
    {
        if (big < example[i])
            big = example[i];
    }
    printf("The Biggest Number is %d\n", big);
}