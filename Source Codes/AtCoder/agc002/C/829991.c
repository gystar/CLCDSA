#include <stdio.h>

int main(void){
	long long int n,l;
	scanf("%lld%lld",&n,&l);
	int i;
	int a[100009];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int lastcut=-1;
	for(i=0;i<n-1;i++){
		if(a[i]+a[i+1]>=l){
			lastcut=i+1;
			break;
		}
	}
	if(lastcut==-1){
		printf("Impossible\n");
	}else{
		printf("Possible\n");
		for(i=1;i<lastcut;i++){
			printf("%d\n",i);
		}
		for(i=n-1;i>=lastcut;i--){
			printf("%d\n",i);
		}
	}

	return 0;

} 