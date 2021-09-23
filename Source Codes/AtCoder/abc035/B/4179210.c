#include<stdio.h>
#include<math.h>

int main(){
  int len = 0, x = 0, y = 0, T, count = 0, d;
  char s[100000];
  
  scanf("%s", &s);
  scanf("%d", &T);
  
  while(s[len]){
    if(s[len] == 'L'){
      x--;
    }
    if(s[len] == 'R'){
      x++;
    }
    if(s[len] == 'U'){
      y++;
    }
    if(s[len] == 'D'){
      y--;
    }if(s[len] == '?'){
      if(T == 1){
        count++;
      } else {
        count--;
      }
    }
    len++;
  }
  
  d = (int)fabs(x) + (int)fabs(y) + count;
  while(d < 0){
    d += 2;
  }
  printf("%d\n", d);
  
  return 0;
} 