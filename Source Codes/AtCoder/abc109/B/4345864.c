#include <stdio.h>
int main (){
int k,han=0,i,j;
  scanf ("%d",&k);
  char s[100][11];
  scanf ("%s",s[0]);
  for (i=1;i<k;i++){
    scanf ("%s",s[i]);
  if (s[i-1][strlen(s[i-1])-1]==s[i][0]){
  }
    else{
    han=han+1;
      break;
    }
    for (j=0;j<i;j++){
  if(strcmp(s[i],s[j])==0){
  han=han+1;
    break;
  }
    }
  
  }  
  
  if (han==0){
printf ("Yes");
  }
  else{
printf("No");
  }
return 0;
} 