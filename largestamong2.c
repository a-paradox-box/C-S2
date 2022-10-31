#include <stdio.h>
void main()
{
    int first, second;
    printf("Enter The First Number = ");
    scanf("%d", &first);
    printf("Enter The Second Number = ");
    scanf("%d", &second);
    if (first > second)
        printf("Largest Number Is = %d", first);
    else
        printf("Largest Number Is = %d", second);
}
