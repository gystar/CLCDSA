#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
  char a[9],b[9];
  scanf("%s %s",a,b);
  int num=atoi(strcat(a,b)),i;
  for(i=1;i<1000;i++){
    if(i*i==num) {
      puts("Yes");
      return 0;
    }
  }
  puts("No");
  return 0;
} 