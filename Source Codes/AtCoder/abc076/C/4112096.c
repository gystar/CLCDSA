#include <stdio.h>
#include <string.h>
int main()
{
    char a[50]={0},b[50]={0};
    int result=0,i,j,count;
    scanf("%s",a);
    scanf("%s",b);
    for(i=strlen(a)-strlen(b)+1;i>=0;i--)
    {
       count=0;
       for (j=i;j<strlen(b)+i;j++)
       {
           if (a[j]==b[j-i]||a[j]=='?')
           {
               count++;
           }
       }
       if (count==strlen(b))
       {
           for (j=i;j<strlen(b)+i;j++)
           {
               a[j]=b[j-i];
           }
           for (j=0;j<strlen(a);j++)
           {
               if (a[j]=='?') a[j]='a';
           }
           printf("%s\n",a);
           return 0;
       }
    }
    if(i<0){
        printf("UNRESTORABLE\n");
    }
    return 0;
} 