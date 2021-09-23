#include<stdio.h>
int main(){
int i,j,k,x,y,z,flag=0;
char s[100];
scanf("%s",s);
for(i=1;s[i]!='\0';i++)
if(s[i]!='9')
{
flag=1;
break;
}
x=0;
y=strlen(s);
if(flag==1)
x=s[0]-48+9*(y-1)-1;
else
x=s[0]-48+9*(y-1);
printf("%d",x);
return 0;
} 