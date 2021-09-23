int n, a, ans, i;
int main(){
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a);
    ans+=a;
  }
  printf("%d\n", ans-n);
} 