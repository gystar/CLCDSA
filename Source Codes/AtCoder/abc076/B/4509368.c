int n, k, ans, i;
int main(){
  scanf("%d%d", &n, &k);
  ans=1;
  for(i=0; i<n; i++){
    if(ans>=k){
      break;
    }else{
      ans<<=1;
    }
  }
  for(; i<n; i++){
    ans+=k;
  }
  printf("%d\n", ans);
} 