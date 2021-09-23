int n, l, r, ans, i;
int main(){
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d%d", &l, &r);
    ans += r-l+1;
  }
  printf("%d\n", ans);
} 