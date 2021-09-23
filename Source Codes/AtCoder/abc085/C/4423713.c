int main(){
  int N,Y;
  scanf("%d %d",&N,&Y);
  for(int i=0;i<=N;i++){
    for(int j=0;j<=N-i;j++){
      if(10000*i + 5000*j + 1000*(N-i-j) == Y){
        printf("%d %d %d",i,j,N-i-j);return 0;
      }
    }
  }
  printf("-1 -1 -1");
  return 0;
} 