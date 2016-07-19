#include<stdio.h>
int main()
{
int num;
int count=0;
printf("enter the num");
scanf("%d",&num);
if(num!=0)
{
num=num/10;
count++;
}
return 0;
}