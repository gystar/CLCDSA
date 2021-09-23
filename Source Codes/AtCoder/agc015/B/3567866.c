#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(void)
{
	//?????
	
	char s[100010];
	int len;
	long int ans;
	int i;
	
	//????????
	scanf("%s",&s);
	
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	ans=0;
	len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]=='U'){
			ans=ans+len+i-1;
//			printf("ans=%d\n",ans);
		}else{
			ans=ans+2*len-i-2;
//			printf("ans=%d\n",ans);
		}
	}
	
//	printf("??????\n");
	
	//??
	
	
	printf("%ld",ans);
	
	
//	printf("???????\n");
	
	return 0;
} 