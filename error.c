#include<stdio.h>
void main()
{
    char name[100];
    int no;
    float m1,m2,m3,m4,tm,p;
    printf("enter the name :");
    scanf("%s",name);
    printf("enter the student number :");
    scanf("%d",&no);
    printf("enter the physics mark :");
    scanf("%f",&m1);
    printf("enter the chemistry mark :");
    scanf("%f",&m2);
    printf("enter the maths mark :");
    scanf("%f",&m3);
    printf("enter the english mark :");
    scanf("%f",&m4);
    tm=m1+m2+m3+m4;
    printf("total mark is %f out of 500\n",tm);
    p=(tm/500)*100;
    printf("percentage =%f\n",p);
    if (p>=80)
    printf("grade=distinition");
    else if (p>=50)
    printf("grade=first class");
    else if (p>=40)
    printf("grade=second class");
    else if (p>=30)
    printf("grade=just pass");
    else 
    printf("grade=failed");
}