main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if(a==b)
  {
    printf("%d\n",c);
  }
  else if(a==c)
  {
    printf("%d\n",b);
  }
  else
  {
	printf("%d\n",a);
  }
  return 0;
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
