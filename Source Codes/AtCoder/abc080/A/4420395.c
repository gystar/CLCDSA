int n, a, b;
int main(){
  scanf("%d%d%d", &n, &a, &b);
  if(n*a<b){
    printf("%d\n", n*a);
  }else{
    printf("%d\n", b);
  }
} 