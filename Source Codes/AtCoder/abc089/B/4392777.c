#include<stdio.h>

int main(){

   int n,i;
   int y=0;
   char s[101];

   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%c",&s[i]);

   for(i=0;i<n;i++)
      if(s[i]=='Y')
         y++;

   if(y==0) printf("Three");
   else printf("Four");
   return 0;
} 