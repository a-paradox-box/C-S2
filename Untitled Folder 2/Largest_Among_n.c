#include <stdio.h>
void main(){
int n,i,no,small;
printf("Enter the Limit : ");
scanf("%d",&n);
printf("Enter the First Number : ");
scanf("%d",&no);
small=no;
for(i=1;i<n;i++)
{
	printf("enter the next number : ");	
	scanf("%d",&no);
		if (no<small)
		small=no;
}
printf("The smallest number =%d",small);
}
