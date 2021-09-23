#include <stdio.h>

int main(void)
{
	char a,b,c,d,e,f;
	
	scanf("%c%c%c\n%c%c%c",&a,&b,&c,&d,&e,&f);

	if(a==f&&c==d&&b==e){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
} 