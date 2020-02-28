#include <stdio.h>
void main(){
int n,sum=0,i;
printf("Enter the first number\n");
for (i=1;i<=10;i++){
	scanf("%d",&n);
	printf("Enter The Next Number\n");
	sum = sum + n;
	}
printf("The sum = %d\n",sum);
}
