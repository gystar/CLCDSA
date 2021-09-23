#include<stdio.h>
int min(int a,int b){if(a<b){return a;}return b;}
main(){int n;scanf("%d",&n);printf("%d\n",(n/10)*100+min((n%10)*15,100));} ./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){int n;scanf("%d",&n);printf("%d\n",(n/10)*100+min((n%10)*15,100));}
 ^
