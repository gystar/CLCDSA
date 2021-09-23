int n, a, ans, i;
int main(){
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a);
    while((a&1)==0){ans++;a>>=1;}
  }
  printf("%d\n", ans);
} 