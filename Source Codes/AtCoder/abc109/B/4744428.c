#include <stdio.h>
#include <string.h>
int main(void){
  int n,i,j;
  char w[100][11];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",w[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(strcmp(w[i],w[j])==0){
        printf("No\n");
        return 0;
      }
    }
    if(w[i][strlen(w[i])-1]!=w[i+1][0]){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
} 