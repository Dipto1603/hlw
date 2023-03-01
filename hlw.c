#include<stdio.h>
int main()
{
int a,b;
printf("a=");
scanf("%d", &a);
printf("b=");
scanf("%d",&b);
float c,d;
printf("c=");
scanf("%f",&c);

printf("d=");
scanf("%f",&d);
//Function:1
float simplification1;
simplification1=(a+b)*(c+d);
printf("simplification:1=%f\n",simplification1);
//Function:2
float simplification2;
simplification2=(a-b)*(c-d);
printf("simplification:2=%f\n",simplification2);
//Function:3
float simplification3;
simplification3=(a*b)/(c*d);
printf("simplification:3=%f\n",simplification3);
//Function:4
float simplification4;
simplification4=(a+b)/(c+d);
printf("simplification:4=%f",simplification4);

    return 0;
}