main(a,b)char*b;{scanf("%s%d",b,&a);a--;printf("%c%c\n",b[a/5],b[a%5]);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b)char*b;{scanf("%s%d",b,&a);a--;printf("%c%c\n",b[a/5],b[a%5]);}
 ^
