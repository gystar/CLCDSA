#include <stdio.h>

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int W,H,N;
  scanf("%d%d%d",&W,&H,&N);

  int xmax = W,xmin = 0;
  int ymax = H,ymin = 0;
  int x,y,a;
  for(int i = 0;i < N;i++){
    scanf("%d%d%d",&x,&y,&a);
    switch(a){
      case 1:
        xmin = max(xmin,x);
        break;
      case 2:
        xmax = min(xmax,x);
        break;
      case 3:
        ymin = max(ymin,y);
        break;
      case 4:
        ymax = min(ymax,y);
        break;
    }
  }

  printf("%d\n",max(0,(xmax-xmin))*max(0,(ymax-ymin)));

  return 0;
} 