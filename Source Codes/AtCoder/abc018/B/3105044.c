char s[999];
l,r;i;
main(){
	gets(s);
	scanf("%*d");
	for(;~scanf("%d%d",&l,&r);)
	{
		for(i=0;i*2<r-l;i++)s[l+i-1]^=s[r-i-1]^=s[l+i-1]^=s[r-i-1];
	}
	puts(s);
} ./Main.c:2:1: warning: data definition has no type or storage class
 l,r;i;
 ^
./Main.c:2:1: warning: type defaults to �int� in declaration of �l� [-Wimplicit-int]
./Main.c:2:3: warning: type defaults to �int� in declaration of �r� [-Wimplicit-int]
 l,r;i;
   ^
./Main.c:2:5: warning: data definition has no type or storage class
 l,r;i;
     ^
./Main.c:2:5: warning: type defaults to �int� in declaration of �i� [-Wimplicit-int]
./Main.c:3:1: warning: return type defaults to �int� [-Wimplicit-int]
 main(){
 ^
