#include<stdio.h>
int main()
{
int num1,num2,a;
printf("enter the num1");
scanf("%d",&num1);
printf("enter the num2");
scanf("%d",&num2);
temp=num1+1;
for(temp;temp<=num2;temp++)
{
for(i=2;i<temp;i++)
{
a=temp%i;
if(a!=0)
{
printf("%d",a);
}
}return 0;
}