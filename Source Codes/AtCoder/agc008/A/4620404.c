#include <stdio.h>
int abs(int a){
  if(a<0){
    return (-1)*a;
  }else{
    return a;
  }
}
int main(){
  int x,y;
  scanf("%d%d", &x, &y);
  int ans = 2000000001;
  if(y>=x){
    ans = y-x;
  }
  if(-y>=x){
    if(-y-x+1<ans){
      ans = -y-x+1;
    }
  }
  if(y>=-x){
    if(y+x+1<ans){
      ans = y+x+1;
    }
  }
  if(-y>=-x){
    if(-y+x+2<ans){
      ans = -y+x+2;
    }
  }
  printf("%d\n", ans);
  return 0;
} 