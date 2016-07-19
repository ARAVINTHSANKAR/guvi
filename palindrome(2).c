#include<stdio.h>
int main()
{
int n,rev=0,temp;
printf("enter the num");
scanf("%d',&n);
temp=n;
while(temp!=0)
{
rev=rev*10;
rev=rev+temp%10;
temp=temp/10;
}
if(n==rev)
{
printf("its a palindrome");
}
else
printf("not");
return 0;
}