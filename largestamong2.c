#include <stdio.h>
#include <stdlib.h>
void main(){

int first,second,third,big;

printf("Enter The First Number = ");
scanf("%d",&first);
printf("Enter The Second Number = ");
scanf("%d",&second);
printf("Enter The Third Number = ");
scanf("%d",&third);
big=first;

if(second>big)
	big=second ; 
if(third>big)
	big=third ;
 
printf("Largest Number Is = %d\n",big);
}
