#include<stdio.h>
 
int main(void){
 
int n,i,j,k,x,sum = 0; char b[300][300];
 
scanf("%d",&n); 
 
for(i = 0; i < n; i++){
  scanf("%s",b[i]);
}
 
for(k = 0; k < n; k++){
x = 1;
for(i = 0; i < n && x == 1; i++){
 for(j = 0; j < n && x == 1; j++){
if(b[ (i+k) % n][ j ] != b[ (j+k) % n ][ i ])  x = 0; 
 }
}
sum += x*n;
}
 
printf("%d",sum);
return 0;
} 