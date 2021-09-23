#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void){
  char a[1000],b[1000];
  int i;
  scanf("%s%s",a,b);
  if(strlen(a)==strlen(b)){
    for(i=0;i<strlen(a);i++){
      if(a[i]<b[i]) {printf("LESS");return 0;}
      else if(a[i]>b[i]) {printf("GREATER");return 0;}
    }
    printf("EQUAL");
  }
  else{
    if(strlen(a)>strlen(b)) printf("GREATER");
    else printf("LESS");
  }
  return 0;
} 