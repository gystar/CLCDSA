main()
{
    char S[200001];
    scanf("%s", S);
    long long i, l=strlen(S), w=0, ans=0;
    for(i=0;i<l;i++)
    {
        if(S[i]=='W') ans+=(i-w++);
    }
    printf("%lld",ans);
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
