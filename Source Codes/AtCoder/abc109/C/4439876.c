int dif(int a, int b){return a<b?b-a:a-b;}
int gcd(int a, int b){
  int r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int n, X, x, ans, i;
int main(){
  scanf("%d%d", &n, &X);
  scanf("%d", &x);
  ans = dif(x,X);
  for(i=1; i<n; i++){
    scanf("%d", &x);
    ans = gcd(ans, dif(x,X));
  }
  printf("%d\n", ans);
} 