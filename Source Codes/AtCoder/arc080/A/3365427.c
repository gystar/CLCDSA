#include <stdio.h>



int main(void)
{
	//?????
	int n;
	int a;
	int i;
	int maru=0;
	int sankaku=0;
	int batu=0;
	
	
	//????????
	scanf("%d",&n);
	
//	printf("n?%d??\n", n);
//	printf("??????????\n");
	//?????
	
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a%4==0){
			maru++;
		}else if(a%2==0){
			sankaku++;
		}else{
			batu++;
		}
	}
	
	if(sankaku>0){
		batu++;
	}
	
	
	
	
//	printf("??????\n");
	
	//??
	
	if(maru+1<batu){
		printf("No");
	}else{
		printf("Yes");
	}
	
//	printf("???????\n");
	
	return 0;
} 