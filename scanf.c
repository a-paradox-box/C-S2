#include <stdio.h>
void main()
{
    int a, b, c, d, e, f;
    printf("Enter The First Number : ");
    scanf("%d", &a);
    printf("Enter The Second Number : ");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    printf("sum = %d\n", c);
    printf("Differnce = %d\n", d);
    printf("product = %d\n", e);
    printf("Quotient = %d\n", f);

    if (c == e)
    {
        printf("Thats Cool\n");
    }
    else
    {
        printf("Have A Nice Day\n");
    }
}
