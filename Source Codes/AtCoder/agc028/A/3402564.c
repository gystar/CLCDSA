#include <stdio.h>
#include <stdlib.h>

int GCD(int ,int);

int main(void){
	
	long long int N,M,G,i,n,m;
	char *S,*T;
  
	scanf("%lld %lld",&N,&M);
	S = (char *)malloc((N+1)*sizeof(char));
	T = (char *)malloc((M+1)*sizeof(char));
	scanf("%s",S);
	scanf("%s",T);

	G = GCD(N,M);
  	n = N/G;
  	m = M/G;

	for(i=0;i<G;i++){
    	if(S[i*n] != T[i*m]){
 			printf("-1\n");       	
			free(S);
			free(T);
			return 0;
        }
    }
  
	printf("%lld\n",(long long int)(N/G*M));

	free(S);
	free(T);
	return 0;
}


int GCD(int a,int b){
	
	int tmp,r;
	
	if(a<b){
		tmp = a;
		a = b;
		b = tmp;
	}
	
	r = a % b;
	
	while(r != 0){
		a = b;
		b = r;
		r = a % b;
	}
  	return b;

} 