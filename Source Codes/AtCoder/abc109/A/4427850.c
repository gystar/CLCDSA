char *S[]={"No","Yes"};
char f;

int a, b;
int main(){
  scanf("%d%d", &a, &b);
  f = a*b&1;
  puts(S[f]);
} 