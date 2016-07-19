#include<stdio.h>
int main()
{
int a;
printf("enter the year");
scanf("%d",&a);
if((a%4==0) && (a%100==0))
{
printf("its a leap");
}
return 0;
}
