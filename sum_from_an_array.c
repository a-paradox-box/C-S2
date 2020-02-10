#include <stdio.h>
void main(){
    int sum=0,i,example[10];

    printf("Enter The Elements Of The Array\n");

    for(i=0;i<10;i++)
        scanf("%d",&example[i]);
    for (i=0;i<10; i++)
        sum=sum+example[i];

    printf("The Sum Is %d\n",sum);
}