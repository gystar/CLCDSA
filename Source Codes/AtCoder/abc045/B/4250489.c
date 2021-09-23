#include <stdio.h>
#include <string.h>
int main(void){
  char a[100],b[100],c[100];
  scanf("%s%s%s",a,b,c);
  char index='a';
  int A=0,B=0,C=0,ans='A';
  while(1){
    if(index=='a'){
      index=a[A];
      ans='A';
      if(a[A]=='\0') break;
      A++;
    }
    else if(index=='b'){
      index=b[B];
      ans='B';
      if(b[B]=='\0') break;
      B++;
    }
    else if(index=='c'){
      index=c[C];
      ans='C';
      if(c[C]=='\0') break;
      C++;
    }
  }
  printf("%c",ans);
  return 0;
} 