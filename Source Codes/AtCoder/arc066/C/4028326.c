long a,b,c;o;
main(A){
	b=c=-1e18;
	for(scanf("%*d%d",&a);~scanf(" %c%d",&o,&A);)
		b=o%3?a+=A,fmax(b-A,c+=A):(a=fmax(a-A,c=b+A));
	printf("%ld",a);
} ./Main.c:1:12: warning: data definition has no type or storage class
 long a,b,c;o;
            ^
./Main.c:1:12: warning: type defaults to ‘int’ in declaration of ‘o’ [-Wimplicit-int]
./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(A){
 ^
