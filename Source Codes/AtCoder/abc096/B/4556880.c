#include <stdio.h>
int main(void){
int a,b,c,k;
  scanf("%d %d %d",&a,&b,&c);
  scanf("%d",&k);
  for(;;){
    if(a>=b&&a>=c){c=c*2; k--;}
      else if(b>=a&&b>=c){b=b*2; k--;}
  		else if(c>=a&&c>=b){c=c*2; k--;}
  if(k==0){break;}
}
  printf("%d",a+b+c);
return 0;
} 