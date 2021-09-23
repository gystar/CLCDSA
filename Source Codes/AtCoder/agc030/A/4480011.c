main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    printf("%d", A+B>=C?B+C:A+B+B+1);
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
