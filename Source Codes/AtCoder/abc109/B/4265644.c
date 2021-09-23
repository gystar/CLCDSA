#include<stdio.h>
#include<string.h>

int main(){
  int i,j,k;
  
  int N;
  
  scanf("%d",&N);
  
  char str[N][11];
  
  for(i=0;i<N;i++){
    scanf("%s",str[i]);
    for(j=0;j<i;j++){
      if(strcmp(str[j],str[i])==0){
        puts("No");
        return 0;
      }
      if(j == i-1){
        if(str[j][strlen(str[j])-1] != str[i][0]){
          puts("No");
          return 0;
        }
      }
    }
  }
    puts("Yes");
    
    return 0;
  
} 