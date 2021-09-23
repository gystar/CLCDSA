cross(a,b,c,d){return a*d-b*c>0;}
f(a,b,c,d,e,f,g,h){
	return cross(c-a,d-b,e-a,f-b)^cross(c-a,d-b,g-a,h-b)&&cross(g-e,h-f,a-e,b-f)^cross(g-e,h-f,c-e,d-f);
}
x[111],y[111];
main()
{
	int a,aa,b,bb,n,cnt=2;
	scanf("%d%d%d%d%d",&a,&aa,&b,&bb,&n);
	for(int i=0;i<n;i++)scanf("%d%d",x+i,y+i);
	for(int i=0;i<n;i++)
	{
		cnt+=f(a,aa,b,bb,x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
	}
	printf("%d\n",cnt/2);
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 cross(a,b,c,d){return a*d-b*c>0;}
 ^
