#include <stdio.h>

int main(void){
  int i, j = 0, d = 0;
  int ATC_COUNT[10] = {0,0,0,0,0,0,0,0,0,0};
  char STRING[10];
  scanf("%s", STRING);
  for(i=0; i<=10; i++){
    if(STRING[i] == 'A' || STRING[i] == 'G' || STRING[i] == 'C' || STRING[i] == 'T') {
      ATC_COUNT[i] = 1;
    }
  }
  for(i=0; i<=10; i++) {
  	if(ATC_COUNT[i] == 1){
  		j++;
  	}
  	if(j >= d){
  		d = j;
  	}
  	if(ATC_COUNT[i] == 0){
  		j = 0;
  	}
  }
	printf("%d",d);
  return 0;
} 