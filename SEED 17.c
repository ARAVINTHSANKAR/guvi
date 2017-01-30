#include <stdio.h>
int main()
{
    int num;
    int ans,org,digit,seed;
    scanf("%d",&num);
    scanf("%d",&seed);
    org=num;
    ans=num;
    while(num!=0)
 {
        digit=num%10;
        ans=ans*digit;
        num=num/10;
}
if(ans==seed)
{
printf("SEED");
}
else
printf("NO SEED");
	return 0;
}
