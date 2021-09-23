main(a,b){scanf("%d%d",&a,&b);a=abs(a-=b);b=a/10;a-=b*10;b+=(a<3?a:(a<8?abs(5-a)+1:(10-a)+1));printf("%d\n",b);} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b){scanf("%d%d",&a,&b);a=abs(a-=b);b=a/10;a-=b*10;b+=(a<3?a:(a<8?abs(5-a)+1:(10-a)+1));printf("%d\n",b);}
 ^
