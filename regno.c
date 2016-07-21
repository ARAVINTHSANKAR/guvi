#include <stdio.h>

int main()
{
int n,i,j;
int a[100],b[100];
printf("enter the no of reg num");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
a[i]=b[j];
for(i=0;i<n;i++)
{
    for(j=1;j<n;j++)
    {
    if(a[i]==b[j])
    printf("reg no:%d",a[i]);
}
}
return 0;
}