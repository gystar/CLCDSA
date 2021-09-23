#include <stdio.h>
#include <string.h>

int main(void){
  char a[101],b[101];

  scanf("%s%s",a,b);

  if(strlen(a) > strlen(b)){
    printf("GREATER\n");
  }else if(strlen(a) < strlen(b)){
    printf("LESS\n");
  }else{
    for(int i = 0;i < strlen(a);i++){
      if(a[i] > b[i]){
        printf("GREATER\n");
        return 0;
      }else if(a[i] < b[i]){
        printf("LESS\n");
        return 0;
      }
    }
    printf("EQUAL\n");
  }

  return 0;
} 