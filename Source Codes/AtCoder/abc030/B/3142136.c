n,m;double s;
main(){
	scanf("%d%d",&n,&m);
	s=(n*60+m*709)%720;
	s/=2;
	printf("%f",s>180?360-s:s);
} ./Main.c:1:1: warning: data definition has no type or storage class
 n,m;double s;
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘n’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘m’ [-Wimplicit-int]
 n,m;double s;
   ^
./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
