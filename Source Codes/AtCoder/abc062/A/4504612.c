#include<stdio.h>
#include<string.h>
int main(void){
    int A,B,C,D,E,x,y,cou=0,v[3];
    char S[3],s[3],X,Y;
    scanf("%d %d",&A,&B);
    if((A==2)&&(B==2)){
        printf("Yes");
    }else if(((A==4)||(A==6)||(A==9)||(A==11))&&((B==4)||(B==6)||(B==9)||(B==11))){
        printf("Yes");
    }else if(((A==1)||(A==3)||(A==5)||(A==7)||(A==8)||(A==10)||(A==12))&&((B==1)||(B==3)||(B==5)||(B==7)||(B==8)||(B==10)||(B==12))){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
} 