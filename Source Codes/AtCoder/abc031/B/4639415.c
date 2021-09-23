main(l,h,a){scanf("%d%d%*d",&l,&h);for(;~scanf("%d",&a);)printf("%d\n",a>l?a>h?-1:0:l-a);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(l,h,a){scanf("%d%d%*d",&l,&h);for(;~scanf("%d",&a);)printf("%d\n",a>l?a>h?-1:0:l-a);}
 ^
