#include<stdio.h>
#include<string.h>
int main(){
  char str[300000];
  scanf("%s",str);
  
  int i,j,k=1,max=0;
  for(i=0;i<strlen(str);i++){
    if(str[i]=='A'){
      j=i;
      break;
  }
  }
  for(i=strlen(str)-1;i!=0;i--){
    if(str[i]=='Z'){
      k=i;
      break;
  }
  }
  
  printf("%d\n",k-j+1);
  return 0;
} 