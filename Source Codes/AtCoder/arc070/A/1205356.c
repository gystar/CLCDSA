#include <stdio.h>

int main(){
int x, y = 0, b = 0;
scanf("%d", &x);
int n = x%2==0?x-(x/2-1):x-(x/2);
for(int i = 0; y < x; i++){
y += i;
if(y==x){
	printf("%d\n", i);
	break;
}
else if(y<x && x<=(y+i+1)){
	printf("%d\n", i+1);
	break;
}
}
return 0;
} 