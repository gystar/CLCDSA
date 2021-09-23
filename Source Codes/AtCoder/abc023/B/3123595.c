n;char s[222];l,r;
main(){
	scanf("%d%s",&n,s);
	r=strlen(s)-1;
	for(;l<r;)
	{
		if(s[l]=='c'&&s[r]=='a')l++,r--;
		else if(s[l]=='a'&&s[r]=='c')l++,r--;
		else if(s[l]=='b'&&s[r]=='b')l++,r--;
		else break;
	}
	printf("%d\n",l==r&&s[r]=='b'?n/2:-1);
} ./Main.c:1:1: warning: data definition has no type or storage class
 n;char s[222];l,r;
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘n’ [-Wimplicit-int]
./Main.c:1:15: warning: data definition has no type or storage class
 n;char s[222];l,r;
               ^
./Main.c:1:15: warning: type defaults to ‘int’ in declaration of ‘l’ [-Wimplicit-int]
./Main.c:1:17: warning: type defaults to ‘int’ in declaration of ‘r’ [-Wimplicit-int]
 n;char s[222];l,r;
                 ^
./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
