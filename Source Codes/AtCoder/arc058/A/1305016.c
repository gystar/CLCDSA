#include <stdio.h>
int used[10];
int check(int n){
	while(n>0){
		if(used[n%10]) return 0;
		n/=10;
	}
	return 1;
}
int main(void)
{
	int n,k,a,i;
	scanf("%d%d",&n,&k);
	for(i=0;i<k;i++){
		scanf("%d",&a);
		used[a]=1;
	}
	while(!check(n)) n++;
	printf("%d\n",n);
	return 0;
} 