#include<stdio.h>
    #include<string.h>
    int main(void){
    int A,B,C,D,E,N,M,x,y,i,j,cou=0,cou2,v[1000000],w[1000000],min_i,en=0;
        char S[100],W[100],s[10],X,Y;
       scanf("%d %d %d %d",&A,&B,&C,&D);
       for(int i=0;i<A;i++){
           scanf("%d",&v[i]);
       }
       for(int i=0;i<A;i++){
           
           if((D>=B)&&(D<=C)){
               cou++;
           }
           D+=v[i];
       }
       printf("%d\n",cou);
       return 0;
    } 