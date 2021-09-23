#include<stdio.h>
int main()
{
  char x,y,z;
  scanf("%1s %1s %1s",&x,&y,&z);
  if(x!=y&&y!=z&&z!=x){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
} 