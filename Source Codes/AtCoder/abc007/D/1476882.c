#include <stdio.h>
 
long long int kinsijanai(long long int x){
    if(x==0)return 1;
    int keta=0;
    long long int po=x;
    long long int ans=1;
    while(x>=10){x/=10;keta++;}
     for(int i=0;i<keta;i++)ans*=8;
    if(x==9)return 8*ans;
    else if(x==4)return 4*ans;
    else if(x>4&&x<9)ans*=(x-1);
    else if(x<4)ans*=x;
    long long int a=1;
    for(int i=0;i<keta;i++)a*=10;
    return ans+kinsijanai(po-x*a);
}
 
int main(void){
    long long int A,B;
    scanf("%lld %lld",&A,&B);
   printf("%lld\n",B-A+1-(kinsijanai(B)-kinsijanai(A-1)));
    return 0;
} 