char s[300003];
c,n,i;
main(){
	read(0,s,300001);
	n=strlen(s)-1;
	for(;i<n/2;i++)c+=s[i]!=s[n-i-1];
	printf("%d\n",n*25-(c?c-1?0:2:n%2*25));
} ./Main.c:2:1: warning: data definition has no type or storage class
 c,n,i;
 ^
./Main.c:2:1: warning: type defaults to ‘int’ in declaration of ‘c’ [-Wimplicit-int]
./Main.c:2:3: warning: type defaults to ‘int’ in declaration of ‘n’ [-Wimplicit-int]
 c,n,i;
   ^
./Main.c:2:5: warning: type defaults to ‘int’ in declaration of ‘i’ [-Wimplicit-int]
 c,n,i;
     ^
./Main.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
