int N,D,K;
int L[10000],R[10000];
main(){
	scanf("%d%d%d%*c",&N,&D,&K);
	for(int i=0;i<D;++i){
		scanf("%d%d%*c",L+i,R+i);
	}
	for(int j=0;j<K;++j){
		int S,T,i=0;
		scanf("%d%d%*c",&S,&T);
		for(;S<T;++i){
			if(L[i]<=S){
				S=fmax(S,fmin(R[i],T));
			}
		}
		for(;T<S;++i){
			if(S<=R[i]){
				S=fmin(S,fmax(L[i],T));
			}
		}
		printf("%d\n",i);
	}
} ./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
