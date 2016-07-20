#include<stdio.h>
int main()
{
int i,table,count;
printf("Enter table number&count\n");
scanf("%d",&table,&count);
printf("The table is\n\n");
for(i=1;i<=count;i++)
printf("%d*%d=%d\n",i,table,i*table);
return 0;
}