#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
	//?????
	char a[200010];
	long int alphabet[30];
	int i,j,k;
	long int len;
	long int ans;
	
	//????????
	scanf("%s",&a);
	
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	for(i=0;i<30;i++){
		alphabet[i]=0;
	}
	
	len=strlen(a);
	for(i=0;i<len;i++){
		alphabet[a[i]-'a']++;
	}
	
	ans=len*(len-1)/2+1;
	for(i=0;i<26;i++){
//		if(alphabet[i]!=0) printf("%c?%d?\n",'a'+i,alphabet[i]);
		ans=ans-alphabet[i]*(alphabet[i]-1)/2;
	}
	
	
	
//	printf("??????\n");
	
	//??
	printf("%ld",ans);
	
//	printf("???????\n");
	
	return 0;
} 