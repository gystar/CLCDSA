int dif(int a, int b){return a<b?b-a:a-b;}
char *s[]={"No","Yes"};
int a, b, c, d;
char f;
int main(){
  scanf("%d%d%d%d", &a, &b, &c, &d);
  f = dif(a,c)<=d || (dif(a,b)<=d && dif(c,b)<=d);
  puts(s[f]);
} 