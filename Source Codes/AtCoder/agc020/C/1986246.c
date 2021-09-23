unsigned long long d[2000*2000/64+1]={1};
N,A,S,i;
main(){
	for(scanf("%d",&N);N--;){
		scanf("%d",&A);
		S+=A;
		for(i=S/64;i>=0;--i){
			d[i+A/64]|=d[i]<<A%64;
			if(A%64){
				d[i+A/64+1]|=d[i]>>64-A%64;
			}
		}
	}
	for(i=-~S/2;;++i){
		if(d[i/64]>>i%64&1){
			printf("%d\n",i);
			break;
		}
	}
} ./Main.c:2:1: warning: data definition has no type or storage class
 N,A,S,i;
 ^
./Main.c:2:1: warning: type defaults to ‘int’ in declaration of ‘N’ [-Wimplicit-int]
./Main.c:2:3: warning: type defaults to ‘int’ in declaration of ‘A’ [-Wimplicit-int]
 N,A,S,i;
   ^
./Main.c:2:5: warning: type defaults to ‘int’ in declaration of ‘S’ [-Wimplicit-int]
 N,A,S,i;
     ^
./Main.c:2:7: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
 N,A,S,i;
       ^
./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
