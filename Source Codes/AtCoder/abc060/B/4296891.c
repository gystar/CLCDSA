#include <stdio.h>
#include <string.h>

int main(void)
{
	int a,b,c,i,check=0;
	scanf("%d%d%d",&a,&b,&c);
	for(i;i<b;i++)
		{if(a*(b+i)%b==c){check=1; printf("YES"); break;}}
	if(check==0){printf("NO");}
	

	return 0;
} 