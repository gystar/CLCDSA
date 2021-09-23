#include <stdio.h>
#include <string.h>

int main(){
  char str[1500];
  char temp;
  int count,i;
  
  scanf("%s",str);
  temp = str[0];
  //printf("%c\n",temp);
  count = 0;
  for(i=1;i<=strlen(str);i++){
    //printf("%c\n",temp);
  	if(temp == str[i]){
      count++;
    //printf("%c %d\n",temp,count);
    }
    else{
      count = 0;
      temp = str[i];
    }
    if(count >=2) break;
  }
  if(temp >= 2) printf("Yes\n");
  else printf("No\n");
  return 0;
} 