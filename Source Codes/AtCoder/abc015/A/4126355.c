main(){
  char a[99],b[99];gets(a);gets(b);
  int i=0;
  while(a[i]&&b[i])i++;
  puts(a[i]?a:b);
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
