# include <stdio.h>

int main(){
  char S[3];
  int i,sum=700;
  scanf("%s",S);
  for(i=0;i<3;i++){
    if(S[i]==111) sum+=100;
  }
  printf("%d\n",sum);

  return 0;
} 