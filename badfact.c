#include <stdio.h>

int main()
{
    int num,fact=1;
    int i;
  printf("enter the  num");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        fact=fact*i;
    }
    return 0;
}