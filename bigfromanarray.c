#include <stdio.h>
void main(){
int small,i,odd[11];
printf("Enter");
for(i=0;i<10;i++)
	scanf("%d",&odd[i]);
small=odd[0];
for(i=0;i<10;i++){
	if(small<odd[i])
		small=odd[i];
	}
printf("biggest=%d",small);
}
