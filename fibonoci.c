void main()
{
int n,c;
int a=0;b=1,i;
printf("Enter the number:");
scanf("%d",&n);
printf("%d\n%d",a,b);
for(i=2;i<=n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
}