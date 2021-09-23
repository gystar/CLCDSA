main(k,s){scanf("%d%d",&k,&s);s=fmin(3*k-s,s);printf("%d",(k<s?6*k*s-2*s*s-3*k*k+3*k+2:(s+1)*(s+2))/2);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(k,s){scanf("%d%d",&k,&s);s=fmin(3*k-s,s);printf("%d",(k<s?6*k*s-2*s*s-3*k*k+3*k+2:(s+1)*(s+2))/2);}
 ^
