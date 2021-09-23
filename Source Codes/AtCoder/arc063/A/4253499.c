#include<stdio.h>
#include<string.h>
int main()
{
int n=0,i,N;
char a[200000];
scanf("%s",&a);
N=strlen(a);

for(i=0;i<N-1;i++)
{
if(a[i]!=a[i+1])          //??????????
n++;
}

printf("%d",n);


return 0;
} 