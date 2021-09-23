#include<stdio.h>
#include<math.h>

int main(){
  char buf[2][256];
  scanf("%s %s",buf[0],buf[1]);
  
  char a[256];
  
  sprintf(a,"%s%s\0",buf[0],buf[1]);
  
  double aa;
  aa = (double)(sqrt(atoi(a)))-(int)(sqrt(atoi(a)));
  if(aa == 0)
    puts("Yes");
  else
    puts("No");
  return 0;
} 