#include<stdio.h>
int main()
{
int a[10];
int i,j,max;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++)
{
if(max>a[i])
{
max=a[i];
}
}
for(i=0;i<10;i++)
printf("%d",a[i]);
return 0;
}