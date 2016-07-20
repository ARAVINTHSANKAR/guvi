#include <stdio.h>

int main(void)
{
    int num,sum=0,temp,rem;
    printf("enter the  num");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(num==sum)
    {
    printf("armstrong");
    }
    else
    {
        printf("not");
    }
    return 0;
    }


