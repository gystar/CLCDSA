#include <stdio.h>
int main(void){
char a[4],b[4];
  scanf("%s",&a);
    scanf("%s",&b);
  if(a[0]==b[2]&&a[2]==b[0]&&a[1]==b[1]){printf("YES");}
else{printf("NO");}
  return 0;
} 