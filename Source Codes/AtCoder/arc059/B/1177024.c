#include<stdio.h>
#define MAX 100005

int main(){
  char s[MAX],*p;
  fread(s,sizeof(char),MAX,stdin);
  p=s;
  
  while(*p!='\n'){
    //  printf("%c , %c , %c\n",*p,*(p+1),*(p+2));
    if(*p==*(p+1)){
      printf("%d %d\n",&*p-s+1,&*p-s+2);
      return 0;
    }
    if(*p==*(p+2)){
      printf("%d %d\n",&*p-s+1,&*p-s+3);
      return 0;
    }
    
    *p++;
  }
  puts("-1 -1");
} 