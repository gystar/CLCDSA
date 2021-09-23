#include <stdio.h>
#include <math.h>


int main(void)
{
	//?????
	int n;
	char s1[55];
	char s2[55];
	int i,j;
	int before=0;
	int now=0;
	long long int count;
	
	//????????
	scanf("%d",&n);
	scanf("%s\n",&s1);
	scanf("%s",&s2);
	
	
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	
	for(i=0;i<n;i++){
		if(i==0){
			if(s1[0]==s2[0]){
				count=3;
				i++;
				before=0;
			}else{
				count=6;
				i++;
				i++;
				before=1;
			}
			if(n==1){
				break;
			}
		}
		
		if(s1[i]==s2[i]){
			now=0;
		}else{
			now=1;
			i++;
		}
		
		if(before==0){
			count=count*2%1000000007;
		}else if(now==1){
			count=count*3%1000000007;
		}
		
		before=now;
//		printf("i=%d,count=%lld\n",i,count);
	}
	
	
//	printf("??????\n");
	
	//??
	
	printf("%ld",count);
	
	
//	printf("???????\n");
	
	return 0;
} 