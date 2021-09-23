#include<stdio.h>

int main(void)
{
int a, b, c, d;
scanf("%d%d%d", &a, &b,&c);
d=(c-b)%2;
if(d==0) printf("Alice\n");
else printf("Borys\n");
return 0;
} 