#include<stdio.h>

int main(){
  char c1[3],c2[3];
  scanf("%s", c1);
  scanf("%s", c2);
  
  if(c1[0]==c2[2] && c1[1]==c2[1] && c1[2]==c2[0]) printf("YES");
else printf("NO");
  return 0;
} 