#include <stdio.h>

int main() 
{
    int i;
    int j,num;
    scanf("%d",&num);
    for(i=0;i<num;)
    {
        for(j=0;j<=i;)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
	return 0;
}

