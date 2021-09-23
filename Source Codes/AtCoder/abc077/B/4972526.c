#include <stdio.h>
int main(void){
int ans;
  int inp;
  scanf("%d",&inp);
  for(ans=0;;ans++){
   if(ans*ans>inp){printf("%d",(ans-1)*(ans-1));break;}
    }
  
return 0;
} 