main(n,m,a,b,c,i){
	scanf("%d%d%d%d",&n,&m,&a,&b);
	for(i=1;i<=m;i++){
		if(n<=a)n+=b;
		scanf("%d",&c);
		if(n<c){printf("%d\n",i);exit(0);}
		n-=c;
	}
	puts("complete");
	exit(0);
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(n,m,a,b,c,i){
 ^
