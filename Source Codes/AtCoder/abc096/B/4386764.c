#include <stdio.h>
int main (){
int a,b,c,e,max=0,iga=0,i;
scanf ("%d%d%d%d",&a,&b,&c,&e);
  if (a>b && a>c){
  iga=b+c;
    max=a;
  }
  else if (b>a && b>c){
  iga=a+c;
    max=b;
  }
  else{
  iga=b+a;
    max=c;
  }
for (int i=0;i<e;i++){
  max=max*2;
}
	printf("%d",max+iga);
	return 0;
	} 