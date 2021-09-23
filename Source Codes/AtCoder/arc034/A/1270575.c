#include <stdio.h>
int main(){
  float N, i, a1, b1, c1, d1, e1,sum, a2, b2, c2, d2, e2,max;
  scanf("%f", &N);
  a1=0;
  b1=0;
  c1=0;
  d1=0;
  e1=0;
  max=0;
  for(i=1;i<=N;i++){
    scanf("%f %f %f %f %f",&a2,&b2,&c2,&d2,&e2);
    sum=a1+b1+c1+d1+e1*110/900;
    if(max < a2+b2+c2+d2+e2*110/900){
      max = a2+b2+c2+d2+e2*110/900;
    }
  }
    printf("%f\n",max);

  return 0;
} 