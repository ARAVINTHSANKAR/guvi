#include<stdio.h>
int main()
{
int num,i;
printf("enter the num");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
printf("not a prime");
}
else
printf("prime");
}return 0;
}