#include <stdio.h>
int main() {
  int h,w,x=0,i,j;
  char a[8][9];
  scanf("%d %d",&h,&w);
  for (i=0;i<h;i++) {
    scanf("%s",a[i]);
  }
  for (i=0;i<h;i++) {
    for (j=0;j<w;j++) {
      if (a[i][j]=='#') {
        x++;
      }
    }
  }
  if (x==h+w-1) {
    printf("Possible\n");
  } else {
    printf("Impossible\n");
  }
  return 0;
} 