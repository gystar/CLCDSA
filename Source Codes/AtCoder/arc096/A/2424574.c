#include <stdio.h>

int main(void){
  int a,b,c,x,y;
  int money,selectA,selectB;

  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&x);
  scanf("%d",&y);

  if(x>y){
    if(b+a>2*c){
      selectA=2*c*y+(x-y)*a;
      selectB=c*2*x;
      if(selectA>selectB){
        printf("%d\n",selectB);
      }else{
        printf("%d\n",selectA);
      }
    }
    else{
      money=a*x+b*y;
      printf("%d\n",money);
    }
    }else{
      if(b+a>2*c){
        selectA=2*c*x+(y-x)*b;
        selectB=c*2*y;
        if(selectA>selectB){
          printf("%d\n",selectB);
        }else{
          printf("%d\n",selectA);
        }
      }
      else{
        money=a*x+b*y;
        printf("%d\n",money);
      }
    }
  return 0;
} 