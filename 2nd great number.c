#include <stdio.h>

int main(void)
{
 int a[6];
 int i,j,current;
 int k,next,m;
 for(i=0;i<=6;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<=6;i++)
 {
     current=a[i];
     for(j=0;j<=6;j++)
     {
         if(a[j]>current)
         current=a[j];
     }
    
     
 }
  for(k=0;k<=6;k++)
  {
      next=a[i];
      for(m=0;m<=6;m++)
      
      {
          if(a[m]>next && a[m]!=current)
          next=a[m];
      }
      
  } 
   printf("%d",next);  
  
	return 0;
}

