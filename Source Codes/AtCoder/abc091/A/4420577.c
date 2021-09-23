char *s[]={"No","Yes"};
int a, b, c;
char f;
int main(){
  scanf("%d%d%d", &a, &b, &c);
  f=a+b>=c;
  puts(s[f]);
} 