#include<stdio.h>

int main(){
  int i=0,a=0,b=0,c=0,d=0,e=0,f=0;
  char s[101];
  scanf("%s",s);
  while(s[i]!=0){
    switch(s[i]){
      case 'A':a++;break;
      case 'B':b++;break;
      case 'C':c++;break;
      case 'D':d++;break;
      case 'E':e++;break;
      case 'F':f++;break;
    }
    i++;
  }
  printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
  return 0;
} 