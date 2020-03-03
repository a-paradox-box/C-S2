#include <stdio.h>
void main(){
int n,i,a[100],search,found=0;
printf("Enter the limit (<100): ");
scanf("%d",&n);
printf("enter the elemts of the array : ");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("Enter the element to be searched : ");
scanf("%d",&search);

for(i=0;i<n;i++)
	if(a[i]==search){
		found=1 ;
		break;
		}
if(found)
	printf("The Element is found");
else
	printf("error 404");
}
