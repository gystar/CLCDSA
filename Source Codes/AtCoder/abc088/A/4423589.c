char *s[]={"No", "Yes"};
int n, a;
char f;

int main(){
  scanf("%d%d", &n, &a);
  f = (n%500 <= a);
  puts(s[f]);
} 