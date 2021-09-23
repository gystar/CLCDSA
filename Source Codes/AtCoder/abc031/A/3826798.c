main(){int n[2];scanf("%d %d", n, n+1);printf("%d\n", ((n[0]+1)*n[1]<n[0]*(n[1]+1)?n[0]*(n[1]+1):(n[0]+1)*n[1]));} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){int n[2];scanf("%d %d", n, n+1);printf("%d\n", ((n[0]+1)*n[1]<n[0]*(n[1]+1)?n[0]*(n[1]+1):(n[0]+1)*n[1]));}
 ^
