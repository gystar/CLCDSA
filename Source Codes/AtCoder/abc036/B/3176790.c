char m[55][55];i,j;
main(n){
	scanf("%d\n",&n);
	for(;gets(m[i++]););
	for(;j<n;j++){
      putchar(32);
		for(i=n;i--;)putchar(m[i][j]);
	}
} ./Main.c:1:16: warning: data definition has no type or storage class
 char m[55][55];i,j;
                ^
./Main.c:1:16: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
./Main.c:1:18: warning: type defaults to ‘int’ in declaration of ‘j’ [-Wimplicit-int]
 char m[55][55];i,j;
                  ^
./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(n){
 ^
