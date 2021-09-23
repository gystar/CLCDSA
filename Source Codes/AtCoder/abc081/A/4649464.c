#include<stdio.h>

int main(){
	char a[3];
  	int i,count;
  	
  
  scanf("%s",a);
  
  for(i=0;i < 3;i++){
    
    if(a[i] == '1'){
      count++;
    }
    
  }
    
  
  	
 printf("%d",count);
  
 
	return 0;
  
} 