#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	char name[101];
	scanf("%s",name);
	for(i=0; i<=strlen(name)/2-1; i++){
		if(name[i]!=name[strlen(name)-i-1]){
			puts("NO");
			return 0;
		}
	}
	puts("YES");
	return 0;
} 