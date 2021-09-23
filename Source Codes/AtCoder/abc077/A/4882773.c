int main(void)
{
  char a[3],b[3];
  gets(a);
  gets(b);
  if(a[0]==b[2] && a[1]==b[1] && a[2]==b[0])
  {
    puts("YES");
  }
  else
  {
    puts("NO");
  }
} 