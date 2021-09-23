#include <stdio.h>
int main(){
int i,k=0,j;
	char s[10];
for (i=0;i<12;i++){
	scanf("%s",s);
	for(j=0;j< strlen(s);j++){
	if(s [j]=='r')
	{
		k++;
		break;
	}
		
	}
	}
	printf("%d\n",k);
	return 0;
	} 