#include<stdio.h>
#include<string.h>

int main(){
  char s[1111];
  scanf("%s",s);
  char *N=strchr(s,'N'),*S=strchr(s,'S'),*E=strchr(s,'E'),*W=strchr(s,'W');
  int ans=0;
  if((N!=0&&S!=0)||(N==0&&S==0)){
    if((E!=0&&W!=0)||(E==0&&W==0)){
      ans=1;
    }
  }
  puts(ans?"Yes":"No");
} 