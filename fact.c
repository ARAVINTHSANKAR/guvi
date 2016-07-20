#include <stdio.h>

void main()
{
    int num,fact=1;
    int i;
  printf("enter the  num");
    scanf("%d",&num);
    if((num==0)||(num==1))
    {
        return 1;
    }
    for(i=1;i<num;i++)
    {
        fact=fact*i;
    }
}