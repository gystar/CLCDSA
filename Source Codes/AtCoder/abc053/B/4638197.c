#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main(void){
  int i,j,st,e;
  char s[201000];
  scanf("%s",s);
  int n=strlen(s);
  for(i=0;i<n;i++){
    if(s[i]=='A'){
      st=i;
      break;
    }
  }
  for(i=n-1;i>=0;i--){
    if(s[i]=='Z'){
      e=i;
      break;  
    }
  }
  printf("%d",e-st+1);
  return 0;
} 