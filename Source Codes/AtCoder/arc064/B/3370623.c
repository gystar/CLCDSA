char s[1<<17];
main(){
	gets(s);
	puts(strlen(s)+(s[0]==s[strlen(s)-1])&1?"First":"Second");
} ./Main.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
