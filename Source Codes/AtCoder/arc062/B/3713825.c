#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define llong long long
#define fr(i,l,r) for(i=(l);i<(r);i++)
#define min(p,q)((p)<(q)?(p):(q))




int main(void)
{
	//?????
	char s[100010];
	int go=0;
	int pa=0;
	
	//??????
	int i,j,k,l;
	int flag=0;
	llong int ans=0;
	int count=0;
	int sum=0;
	long int temp,temp1,temp2;
	int max,min;
	int len;
	//????????
	
	scanf("%s",&s);
	
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	len=strlen(s);
	
	for(i=0;i<len;i++){
		if(s[i]=='g'){
			go++;
		}else if(s[i]=='p'){
			pa++;
		}else{
			printf("error");
		}
	}
	
//	printf("??????\n");
	//??
	
	printf("%d",(go-pa)/2);
	
//	printf("???????\n");
	
	return 0;
	
} 