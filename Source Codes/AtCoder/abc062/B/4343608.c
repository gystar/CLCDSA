#include <stdio.h>
int main(void) {
  int h,w,i;
  char a[111];
  scanf("%d%d",&h,&w);
  for(i=0;i<=w+1;i++) {
    printf("#");
  }
  printf("\n");
  for(i=0;i<h;i++) {
    scanf("%s",a);
    printf("#%s#\n",a);
  }
  for(i=0;i<=w+1;i++) {
    printf("#");
  }
} 