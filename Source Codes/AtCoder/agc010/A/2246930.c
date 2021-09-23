#include<stdio.h>

int main(void){
 
  int n;
  scanf("%d", &n);
  
  int a[100000];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  int count=0;
  
  for(int i=0;i<n;i++){
   	if(a[i]%2 == 1)count++; 
  }
  
  if(count%2==0){
    printf("YES");
  }else{
  	printf("NO"); 
  }
  return 0;
} 