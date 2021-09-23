long n,k,c,b;
main(){
	scanf("%d%d",&n,&k);n++;
	for(b=k;++b<n;){
		c+=n/b*(b-k)-!k;
		c+=fdim(n,n/b*b+k);
	}
	printf("%ld",c);
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
