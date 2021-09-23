#include<stdio.h>
int main(){
  char S[11];
  scanf("%s",S);
  int i;
  int cnt=0;
  int ans=0;
  for(i=0;S[i]!='\0';i++){
	if(S[i]=='A'||S[i]=='T'||S[i]=='C'||S[i]=='G') {
      cnt++;
    }
    else{
      if(cnt>ans) ans=cnt;
      cnt=0;
    }
    
  }
  
  if(cnt>ans) ans=cnt;
  
  printf("%d",ans);
  return 0;
} 