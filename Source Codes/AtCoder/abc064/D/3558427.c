#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	//?????
	int n;
	char s[110];
	int i,j,k;
	int l,r;
	char dummy;
	
	//????????
	scanf("%d",&n);
	scanf("%c",&dummy);
	
	for(i=0;i<n;i++){
		scanf("%c",&s[i]);
	}
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	l=0;
	r=0;
	
	for(i=0;i<n;i++){
		if(s[i]-')'==0){
			if(r==0){
				l++;
//				printf("l=%d,r=%d\n",l,r);
			}else{
				r--;
//				printf("l=%d,r=%d\n",l,r);
			}
		}else{
			r++;
//			printf("l=%d,r=%d\n",l,r);
		}
	}
	
	
//	printf("??????\n");
	
	//??
	
	for(i=0;i<l;i++){
		printf("(");
	}
	
	for(i=0;i<n;i++){
		printf("%c",s[i]);
	}
	
	for(i=0;i<r;i++){
		printf(")");
	}
	
	
//	printf("???????\n");
	
	return 0;
} 