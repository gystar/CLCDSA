#include<stdio.h>
#include<math.h>
 
int main(){
  int N;
  scanf("%d",&N);
  int x[N],y[N];
  for(int i=0;i<N;i++){
    scanf("%d",&x[i]);
    scanf("%d",&y[i]);
  }
  
  double max=0;
  
  for(int j=0;j<N-1;j++){
    for(int k=j+1;k<N;k++){
      if((double)(x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k])>max*max){
        max=sqrt((double)(x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]));
        //printf("max:%lf\nj:%d\nk:%d\n",max,j,k);
      } else {
        //printf("\nabort data\nj:%d\nk:%d\n",j,k);
      }
    }
  }
  
  printf("%lf\n",max);
  
  return 0; 
} 