#include <stdio.h>
int main (){
int l,h,k,i,g;
scanf ("%d%d%d",&l,&h,&k);
for (i=0;i<k;i++){
scanf ("%d",&g);
if (g<l+1){
printf ("%d\n",l-g);
}
  else if (g>l && g<h+1){
  printf ("0\n");
  }
  else{
  printf ("-1\n");
  }
}
return 0;
} 