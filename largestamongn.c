#include <stdio.h>
void main(){
int n,big,i,no;
printf("Enter The limit = ");
scanf("%d",&n);
printf("Enter The first Number = ");
scanf("%d",&no);
big=no;
for(i=2;i<=n;i++)
	{
	printf("enter the next number");
	scanf("%d",&no);
		if(no>big)
			big=no;
	}
printf("Largest Number Is = %d",big);
}
