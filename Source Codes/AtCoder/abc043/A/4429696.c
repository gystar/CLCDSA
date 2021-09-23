int main(){
  
  int N;
  int sum = 0;
  
  scanf("%d", &N);

  for(int cnt = 1; cnt <= N; cnt++){
    sum = sum + cnt;
  }

  printf("%d\n", sum);
  
} 