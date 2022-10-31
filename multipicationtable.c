#include <stdio.h>
void main()
{
    int mult, count;
    printf("Enter the number : ");
    scanf("%d", &count);
    for (mult = 1; mult <= 10; mult++)
        printf("%d x %d = %d \n", count, mult, count * mult);
}