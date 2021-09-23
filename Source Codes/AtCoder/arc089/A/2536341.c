#include<stdio.h>
#include<stdlib.h>
int main(void){
  int n , i, sw = 0 , nx = 0,ny = 0 , diff;
  scanf("%d",&n);
  int t[n],x[n],y[n];
  for(i = 0; i < n; i++){
    scanf("%d %d %d" , &t[i], &x[i] ,&y[i]);
  }
  if(x[0]+y[0] > t[0] || (x[0]+y[0] < t[0] && (t[0]-x[0]-y[0])% 2!= 0)){
    sw = 1; //printf("one");
  }else{
    nx = x[0]; ny = y[0];
  }
  if(sw == 0){
  for(i = 1; i < n ; i++){
    diff = abs(x[i] - nx) + abs(y[i] - ny);
    if(diff > t[i] - t[i-1] || (diff < t[i] - t[i-1]&& (t[i] - t[i-1] - diff) %2 != 0)){
      sw = 1; //printf("two%d",i);
      break;
    }
    else{
      nx = x[i]; ny = y[i];
    }
  }
  }
  if(sw == 0){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
} 