#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  int N,M,X,Y;
  int x[1000],y[1000];
  scanf("%d%d%d%d",&N,&M,&X,&Y);
  int i,max_x=X,min_y=Y;
  for(i=0;i<N;i++) {scanf("%d",&x[i]);if(x[i]>max_x) max_x=x[i];}
  for(i=0;i<M;i++) {scanf("%d",&y[i]);if(y[i]<min_y) min_y=y[i];}
  if(max_x<min_y) printf("No War");
  else printf("War");
  return 0;
} 