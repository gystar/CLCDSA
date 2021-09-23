#include<stdio.h>

int main(){
    char r[100];
    int num,sum=0,i,j;

    scanf("%d",&num);
    scanf("%s",r);

    for(j=0;j<num;j++){
      if(r[j]=='A'){
        sum+=4; 
      }else if(r[j]=='B'){
        sum+=3;
      }else if(r[j]=='C'){
        sum+=2;
      }else if(r[j]=='D'){
        sum+=1;
      }else{
        sum+=0;
      }
    }
    printf("%.15lf\n",(double)sum/num);
    return 0;
} 