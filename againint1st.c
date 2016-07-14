#include<stdio.h>
#include<string.h>
int main()
{
int a[100];
int i,j;
printf("enter the elements");
for(i=0;i<=100;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=100;i++)
{
    for(j=i+1;j<=100;j++)

{
    if(a[i]==a[j])
    {
    printf("%d",a[i]);
    }}
}return 0;
}