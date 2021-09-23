#include<stdio.h>
#include<math.h>
#define sq(a) (a)*(a)

int main(){
  int n,x[101],y[101],i,j,max=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&x[i],&y[i]);
  }
  while(--n){
    for(i=0;i<n;i++){
      j=sq(x[n]-x[i])+sq(y[n]-y[i]);
      if(max<j){
        max=j;
      }
    }
  }
  printf("%f\n",sqrt(max));
} 