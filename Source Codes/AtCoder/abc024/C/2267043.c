#include<stdlib.h>
int N,D,K;
int L[10000],R[10000];
main(){
	scanf("%d%d%d%*c",&N,&D,&K);
	for(int i=0;i<D;++i){
		scanf("%d%d%*c",L+i,R+i);
	}
	for(int j=0;j<K;++j){
		int S,T;
		scanf("%d%d%*c",&S,&T);
		if(S<T){
			for(int i=0;i<D;++i){
				if(L[i]<=S&&S<R[i]){
					S=R[i];
				}
				if(T<=S){
					printf("%d\n",i+1);
					break;
				}
			}
		}else{
			for(int i=0;i<D;++i){
				if(S<=R[i]&&L[i]<S){
					S=L[i];
				}
				if(S<=T){
					printf("%d\n",i+1);
					break;
				}
			}
		}
	}
} ./Main.c:4:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
