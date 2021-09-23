#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int n,i;
  char w[111][11];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",w[i]);
    if(i>0&&w[i][0]!=w[i-1][strlen(w[i-1])-1]){
      puts("No");
      return 0;
    }
  }
  qsort(w,n,sizeof(w[0]),strcmp);
  for(i=1;i<n;i++){
    if(strcmp(w[i],w[i-1])==0){
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
} 