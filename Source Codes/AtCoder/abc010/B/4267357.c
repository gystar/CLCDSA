#include<stdio.h>
int main(void)
{
	int i,n,a,b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a%6==2){
			b+=1;
		}else if(a%6>=4){
			b=b+a%6-3;
		}else if(a%6==0){
			b+=3;
		}
	}
	printf("%d\n",b);
	return 0;
} 