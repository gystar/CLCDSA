#include<stdio.h>
int main()
{
char c1,c2;
scanf("%c %c",&c1,&c2);
if(c2==(c1-'A'+'a'))
printf("Yes\n");
else
printf("No\n");
return 0;
} 