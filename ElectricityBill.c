#include <stdio.h>
void main(){

char name[20];
int no,type,Intial,final,valid;

printf("Enter The Consumer Number : \n");
scanf("%d",&no);
printf("Enter The Name : \n");
scanf("%s",name);
printf("Enter The Consumer Type : \n");
scanf("%d",&type);
printf("Enter The Intial Reading: \n");
scanf("%d",&Intial);
printf("Enter The Final Reading : \n");
scanf("%d",&final);    

final=final-Intial;

switch(type)
{
default:{
    printf("Please Enter A Valid Type");
    valid=1;
    break;
    }
case 1:
    final=final;
    break;
case 2:
    final=final*3;
    break;
case 3:
    final=final*6;
    break;
case 4:
    final=final*10;
    }
if(valid!=1){
printf("\t\tCONSUMER BILL \n");
printf("Cousumer Name : %s\n",name);
printf("Consumer Number : %d \n",no);
printf("Consumer Type : %d \n",type);
printf("Consumption Charge : %d",final);
}
}