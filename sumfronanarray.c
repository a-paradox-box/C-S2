#include <stdio.h>
void main(){
int sum,i,odd[11];
printf("Enter");
for(i=0;i<10;i++)
	scanf("%d",&odd[i]);
for(i=0;i<10;i++)
	sum=sum+odd[i];
printf("sum=%d",sum);
}
