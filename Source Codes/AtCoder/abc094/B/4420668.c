#include <stdio.h>

int main(void) {
  
 int a,b,c,i,j;
  int d = 0, e = 0;
  scanf("%d %d %d",&a,&b,&c);
 int str[102];
  
  for (i == 0;i < b;++i){
    scanf("%d",&str[i]);
  }

for (j == 0; j < b; ++j){
  if (c - str[j] > 0) {
    d = d + 1;
  } else {
    e = e + 1;
  }
}
  
if (d - e >= 0) {
  printf("%d",e);
} else {
  printf("%d",d);
}
  
  return 0;
} 