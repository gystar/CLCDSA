#define l long
l C(l x){l z=0;l f=1;for(l p=1e18;p;p/=10){l s=x/p%10;z=z*8+(f?(s>4?s-1:s):0);f&=s%5!=4;}return x-z;}main(){l a,b;scanf("%ld%ld",&a,&b);printf("%ld\n",C(b+1)-C(a));} ./Main.c:2:102: warning: return type defaults to �int� [-Wimplicit-int]
 l C(l x){l z=0;l f=1;for(l p=1e18;p;p/=10){l s=x/p%10;z=z*8+(f?(s>4?s-1:s):0);f&=s%5!=4;}return x-z;}main(){l a,b;scanf("%ld%ld",&a,&b);printf("%ld\n",C(b+1)-C(a));}
                                                                                                      ^
