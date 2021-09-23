float a,b;
int f(float c,float d)
{
	if(a<c&&b<d)return 1;
	float q=0,p=1.57,t;
	for(int i=0;i<99;i++)
	{
		t=(q+p)/2;
		if(a*sin(t)+b*cos(t)<c&&a*cos(t)+b*sin(t)<d)return 1;
		else if(a*sin(t)+b*cos(t)>c)p=t;
		else q=t;
	}
	return 0;
}
main()
{
	float c,d,e;
	int n;
	scanf("%f%f%d",&a,&b,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%f%f",&c,&d);
		int s=f(c,d)||f(d,c);
		if(!s)e=a,a=b,b=e;
		s|=f(c,d)||f(d,c);
		puts(s?"YES":"NO");
	}
} 