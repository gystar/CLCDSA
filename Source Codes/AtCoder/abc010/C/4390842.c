#include<stdio.h>
#include<math.h>

int main(){
  float txa, tya, txb, tyb, x, y, pos, p, q, T, V;
  int N, flag = 0;
  
  scanf("%f %f %f %f %f %f", &txa, &tya, &txb, &tyb, &T, &V);
  pos  = T*V;
  scanf("%d", &N);
  
  for (int i = 0; i < N; i++){
    scanf("%f %f", &x, &y);
    p = sqrt((txa - x)*(txa - x) + (tya - y)*(tya - y));
    q = sqrt((txb - x)*(txb - x) + (tyb - y)*(tyb - y));
    if(p + q <= pos){
      flag = 1;
    }
  }
  
  if(flag == 1){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  
  return 0;
} 