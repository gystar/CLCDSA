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
      if(max<sq(x[n]-x[i])+sq(y[n]-y[i])){
        max=sq(x[n]-x[i])+sq(y[n]-y[i]);
      }
    }
  }
  printf("%f\n",sqrt(max));
} 