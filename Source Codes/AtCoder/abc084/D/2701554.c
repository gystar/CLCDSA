#include <stdio.h>
#include <math.h>

#define MAX_a 100005
 
int isprime[MAX_a];
int add[MAX_a];
 
void eratosthenes(){
 
	int i,j;
 
	for(i=0;i<=MAX_a;i++){
		isprime[i] = 1;
	}
	isprime[0] = isprime[1] = 0;
	for(i=0;i<=sqrt((double)MAX_a)+1;i++){
		if(isprime[i]==1){
			for(j = i + i; j <= MAX_a; j+=i){
				isprime[j] = 0;
			}
		}
	}
}
int main() {

	eratosthenes();

	int i;

	for(i=3;i<=MAX_a;i++){
		if(isprime[i]==1 && isprime[(i+1)/2]==1){
		add[i]+=add[i-1]+1;
		}
		else{add[i]=add[i-1];}
	}

	int Q;

	scanf("%d",&Q);

	for(i=0;i<Q;i++){
	int l,r;
	scanf("%d %d",&l,&r);
	printf("%d\n",add[r]-add[l-1]);
	}


	return 0;
} 