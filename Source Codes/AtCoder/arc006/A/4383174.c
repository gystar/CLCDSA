#include<stdio.h>

int main(){
		int i,b,a,num[10]={0};
		for(i=0;i<6;i++){
				scanf("%d",&a);
				num[a]++;
		}
		scanf("%d",&b);
		for(i=0;i<6;i++){
				scanf("%d",&a);
				num[a]++;
		}a=0;
		for(i=0;i<10;i++)if(num[i]==2)a++;
		if(a<3)puts("0");
		else if(a==3)puts("5");
		else if(a==4)puts("4");
		else if(a==6)puts("1");
		else if(num[b]==1)puts("2");
		else puts("3");
		return 0;
} 