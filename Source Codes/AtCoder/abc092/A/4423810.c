int min(int a, int b){return a>b?b:a;}
int a, b, c, d;
int main(){
  scanf("%d%d%d%d", &a, &b, &c, &d);
  printf("%d\n", min(a,b)+min(c,d));
} 