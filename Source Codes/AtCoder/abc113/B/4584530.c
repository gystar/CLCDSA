#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
  double t,a,tmp,min=100000000.0;
  int num=0,n,i;
  scanf("%d",&n);
  scanf("%lf %lf",&t,&a);
  double h[n];
  for(i=0;i<n;i++){
    scanf("%lf",&h[i]);
  }
  for(i=0;i<n;i++){
    tmp=a-t+h[i]*0.006;
    if(tmp<0) tmp*=-1;
    //printf("%f\n",tmp);
    if(min>tmp){
      min=tmp;
      num=i;
    }
  }
  printf("%d\n",num+1);
  return 0;
} 