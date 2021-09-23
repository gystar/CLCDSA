int main(){
  
  int N, K, X, Y;
  int sum = 0;
  
  scanf("%d%d%d%d", &N, &K, &X, &Y);

  for(int cnt = 1; cnt <= N; cnt++){
    if(cnt <= K){
      sum = sum + X;
    }else{
      sum = sum + Y;
    }
  }

  printf("%d\n", sum);
  
} 