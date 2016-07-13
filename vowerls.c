#include<stdio.h>
#include<string.h>
int main()
{
int i;
char a[10];
char b[10];
printf("enter the string");
gets(a);
char b[10]=strrev(a);
printf("reverseof the strng is%s",b[10]);

for(i=0;i<=10;i++)
{
if(a[i]!=='a'||a[i]!=='e'||a[i]!=='i'||a[i]!=='o'||a[i]!=='u')
printf("%d",a[i]);
}
return 0;
}

