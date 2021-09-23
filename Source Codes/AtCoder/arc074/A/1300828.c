a;f(H,W){for(long i=H,x,y,z,t;i--;a=t<a?t:a)x=(H-i)*W,y=W/2*i,z=(W+1)/2*i,t=x>z?x-y:x<y?z-x:i;}main(H,W){scanf("%d%d",&H,&W);printf("%d\n",H%3&&W%3?a=H<W?H:W,f(H,W),f(W,H),a:0);} ./Main.c:1:1: warning: data definition has no type or storage class
 a;f(H,W){for(long i=H,x,y,z,t;i--;a=t<a?t:a)x=(H-i)*W,y=W/2*i,z=(W+1)/2*i,t=x>z?x-y:x<y?z-x:i;}main(H,W){scanf("%d%d",&H,&W);printf("%d\n",H%3&&W%3?a=H<W?H:W,f(H,W),f(W,H),a:0);}
 ^
./Main.c:1:1: warning: type defaults to ‘int’ in declaration of ‘a’ [-Wimplicit-int]
./Main.c:1:3: warning: return type defaults to ‘int’ [-Wimplicit-int]
 a;f(H,W){for(long i=H,x,y,z,t;i--;a=t<a?t:a)x=(H-i)*W,y=W/2*i,z=(W+1)/2*i,t=x>z?x-y:x<y?z-x:i;}main(H,W){scanf("%d%d",&H,&W);printf("%d\n",H%3&&W%3?a=H<W?H:W,f(H,W),f(W,H),a:0);}
   ^
