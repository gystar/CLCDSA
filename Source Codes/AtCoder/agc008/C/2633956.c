main(I,O,J,L,d){scanf("%d%d%*d%d%d",&I,&O,&J,&L);printf("%lld",(long long)O+I+J+L-(1<(d=I%2+J%2+L%2)&&I&&J&&L?3-d:d));} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(I,O,J,L,d){scanf("%d%d%*d%d%d",&I,&O,&J,&L);printf("%lld",(long long)O+I+J+L-(1<(d=I%2+J%2+L%2)&&I&&J&&L?3-d:d));}
 ^
