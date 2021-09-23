#include <stdio.h>
int main (){
int i,j,n,m,x,y,a,b,max=-100,min=100;
  scanf ("%d%d%d%d",&n,&m,&x,&y);
for (i=0;i<n;i++){
scanf ("%d",&a);
  if (max<a){
 max=a; 
  }
}
for (i=0;i<m;i++){
  scanf ("%d",&b);
 if (min>b){
 min=b; 
  }
}
if (max>x && max<min && min<y+1){
printf ("No War");
}
  else {
  printf ("War");
  }
return 0;
} 