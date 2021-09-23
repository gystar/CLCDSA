main(a,b,c,k,s,t){~scanf("%d",&a)?main(b,c,k,s,t,a):printf("%d\n",a*s+b*t-((s+=t)<k?0:c*s));} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(a,b,c,k,s,t){~scanf("%d",&a)?main(b,c,k,s,t,a):printf("%d\n",a*s+b*t-((s+=t)<k?0:c*s));}
 ^
