char s[1<<17];
main(){
	read(0,s,1<<17);
	puts(strlen(s)+(s[0]==s[strlen(s)-2])&1?"Second":"First");
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
