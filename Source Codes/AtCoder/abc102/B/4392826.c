#include<stdio.h>

int main(void)
{
 int max,min,n;
 int tmp,i,s[100];

 scanf("%d",&n);

 for(i=0;i<n;i++){
  scanf("%d",&s[i]);
 }
 max=s[0];
 min=s[0];

 for(i=1;i<n;i++){
   if(max<s[i]) max=s[i];
   if(min>s[i]) min=s[i];
 }

 tmp=max-min;
 printf("%d\n",tmp);

 return 0;
} 