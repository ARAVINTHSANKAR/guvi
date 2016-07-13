#include<stdio.h>
int main()
{
int fact=1,i,num;
printf("enter the num");
scanf("%d",&num)

for(i=0;i<=num;i++);
{
fact=fact*i;
}
printf(factorial is:"%d",fact);
return 0;
}