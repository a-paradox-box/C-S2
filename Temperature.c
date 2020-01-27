#include <stdio.h>
#include <stdlib.h>
void main(){
int val;
float gone,celsius,faren,cel ;
printf("\tEnter 1 for Celsius Coverter and 2 for Farenhiet Coverter\n");
scanf("%d",&val);
system("clear");
printf("\tEnter 1 for Celsius Coverter and 2 for Farenhiet Coverter\n");
if (val==1){
printf("Enter the Farenhiet : ");
scanf("%f",&gone);
celsius=(gone-32.0)*(5.0/9.0);
printf("celsius=%f\n",celsius);
}
else{
printf("Enter the Celsius : ");
scanf("%f",&cel);
faren=cel*(9.0/5.0)+32.0;
printf("Farenhiet=%f\n",faren);
}
system("exit");
}
