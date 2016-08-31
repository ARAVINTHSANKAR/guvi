#include<stdio.h>
void main()
{
    char s[100]="The five boxing wizards jump quickly";
    int i,used[26]={0},total=0;
    for(i=0;s[i]!='\0';i++)
    {
        if('a'<=s[i] && s[i]<='z')
        {
            total+=!used[s[i]-'a'];
            used[s[i]-'a']=1;
        }
        else if('A'<=s[i] && s[i]<='Z')
        {
            total+=!used[s[i]-'A'];
            used[s[i]-'A']=1;
        }
    }
     
    if(total==26)
    {
        printf("\n The Entered String is a Pangram String.");
    }
    else
    {
        printf("\n The Entered String is not a Pangram String.");
    }
    return 0;
}