#include<stdio.h>
#include<math.h>

int main(){
  int i,j,k=0;
  int N;
  int a,b;
  scanf("%d",&N);
  
  for(i=0;i<N;i++){
    scanf("%d %d",&a,&b);
    k += (b-a+1);
    }
    
    printf("%d\n",k);
  return 0;
} 