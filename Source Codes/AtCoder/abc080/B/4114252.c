# include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int q = n;
  int f_n = 0;
  for (int i = 0; i < 9; i++){
    f_n += q % 10;
    q /= 10;
    if(!q){
      break;
    }
  }
  if (!(n % f_n)){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
} 