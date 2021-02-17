#include <stdio.h>
void main(){
int n,fact=1,i;
printf("Enter The Number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
	fact=fact*i;
printf("factorial Of The Number = %d",fact);
}
