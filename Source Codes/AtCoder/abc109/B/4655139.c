#include <stdio.h>
#include <string.h>
void no(){
  printf("No");
}
int main(){
  int n,i,j,t;
  scanf("%d",&n);
  char buf[n][11];
  for(i=0;i<n;i++){
    scanf("%s\n",buf[i]);
    if(i!=0){
      t=strlen(buf[i-1]);
      if(buf[i-1][t-1]==buf[i][0]){
        for(j=0;j<i;j++){
          if (strcmp(buf[j],buf[i])==0){
            no();
            return 0;
          }
        }
      }
      else{
        no();
        return 0;
      }
    }
  }
  printf("Yes");
} 