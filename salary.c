#include <stdio.h>
void main(){
    char name[100];
    int number,basic,DA,HR,Total,Deduction,Net;

    printf("Enter The Employ Name : ");
    scanf("%s",name);
    printf("Enter The Employ Number : ");
    scanf("%d",&number);
    printf("Enter The Basic Pay : ");
    scanf("%d",&basic);

    DA=(basic*20)/100 ;
    HR=(basic*10)/100 ;
    Total=basic+DA+HR ;
    Deduction=(Total*5)/100 ;
    Net=Total-Deduction ;

    printf("Employ Name = %s\n",name);
    printf("Employ Number = %d\n",number);
    printf("Dearness Allowance[DA] = %d\n",DA);
    printf("HRA = %d\n",HR);
    printf("Deduction = %d\n",Deduction);
    printf("Net Salary = %d\n",Net);
}