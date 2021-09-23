int def2(int a, int b){return a<b?b-a:a-b;}
int min2(int a, int b){return a>b?b:a;}
int n, k, x, ans, now, i;
int main(){
  scanf("%d%d", &n, &k);
  for(i=0; i<n; i++){
    scanf("%d", &x);
    now=min2(def2(0,x),def2(k,x))<<1;
    ans+=now;
  }
  printf("%d\n", ans);
} 