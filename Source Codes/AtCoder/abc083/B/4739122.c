#include<stdio.h>
int main(void){
 int value;
 int sum=0;
 int min,max;
 int current=0;
 int temp=100;
 int i;
scanf("%d %d %d",&value,&min,&max);
for(i=1;i<=value;i++){
  temp=i;
  current=0;
   while(temp>0){
       current+=temp%10;
       temp/=10;
   }
   if(current>=min && current<=max){ sum+=i;
                                   }
}
printf("%d",sum);
} 