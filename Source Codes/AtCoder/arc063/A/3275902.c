c,d,s;
main(){
	c=getchar_unlocked();
	while((d=getchar_unlocked())>10)
	{
		s+=c!=d;
		c=d;
	}
	printf("%d",s);
} ./Main.c:1:1: warning: data definition has no type or storage class
 c,d,s;
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘c’ [-Wimplicit-int]
./Main.c:1:3: warning: type defaults to ‘int’ in declaration of ‘d’ [-Wimplicit-int]
 c,d,s;
   ^
./Main.c:1:5: warning: type defaults to ‘int’ in declaration of ‘s’ [-Wimplicit-int]
 c,d,s;
     ^
./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
