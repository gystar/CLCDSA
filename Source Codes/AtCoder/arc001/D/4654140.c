char b[73];
g(i,d){
	return(i-=d)<0|i%9>7||b[i]&4&&g(i,d);
}
f(i,n,a){
	a=b[++i];a?a%5&g(i,1)&g(i,8)&g(i,9)&g(i,10)&&f(i,n+1,b[i]=81),b[i]=a,a&1||f(i,n):n-8?0:exit(!puts(b));
}
main(){
	f(-1,!read(0,b,72));
	exit(!puts("No Answer"));
} ./Main.c:2:1: warning: return type defaults to �int� [-Wimplicit-int]
 g(i,d){
 ^
