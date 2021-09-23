#include <stdio.h>

int main(void){
  char S[11];
  int i=0,res=0;
  scanf("%s",S);
  for(int i=0;S[i]!='\0';i++){
    int sum=0;
    for(int j=i;S[j]!='\0';j++){
      if(S[j]=='A' || S[j]=='C' || S[j]=='G' || S[j]=='T') sum++;
      else break;
    }
    if(sum>res) res=sum;
  }
  printf("%d\n",res);
  return 0;
} 