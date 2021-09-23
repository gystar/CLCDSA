main()
{
  char a[5];
  gets(a);
  int ans = 0;
  for(int i=1;i<4;i++)
  {
    ans += a[i]-a[0];
  }
  puts(ans?"DIFFERENT":"SAME");
} ./Main.c:1:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main()
 ^
