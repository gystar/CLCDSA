main(){
  long n,m,r;
  scanf("%ld%ld",&n,&m);
  r=n%2?n++:0;
  r^=m%2?0:m--;
  printf("%ld",(m-n+1)%4?r^1:r);
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^
