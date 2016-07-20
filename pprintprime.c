#include<stdio.h>
int main()
{
int num1,num2,a,count=0;
int d,i;
int temp;
printf("enter the num1");
scanf("%d",&num1);
printf("enter the num2");
scanf("%d",&num2);
temp=num1+1;
for(i=2;i<temp;i++)
{
    count++;
}
for(temp;temp<num2;temp++)
{
for(i=2;i<temp;i++)
{
a=temp%i;

if(a==0)
{
    break;
}
if(a!=0)
{
d++;
}
if(d==count)
{
    printf("%d",temp);
}
    
}
}
return 0;
}