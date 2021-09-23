p(n,i){if(n<2)return 1;for(i=2;i<n;)if(n%i++==0)return 1;return 0;}main(n){scanf("%d",&n);puts(p(n*(n+1)/2)==0?"WANWAN":"BOWWOW");} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 p(n,i){if(n<2)return 1;for(i=2;i<n;)if(n%i++==0)return 1;return 0;}main(n){scanf("%d",&n);puts(p(n*(n+1)/2)==0?"WANWAN":"BOWWOW");}
 ^
