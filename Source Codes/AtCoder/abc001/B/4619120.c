main(a){scanf("%d",&a);printf("%02d\n",a>70000?89:(a/=100)>50?(a/=10)>30?80+(a-30)/5:50+a:a);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a){scanf("%d",&a);printf("%02d\n",a>70000?89:(a/=100)>50?(a/=10)>30?80+(a-30)/5:50+a:a);}
 ^
