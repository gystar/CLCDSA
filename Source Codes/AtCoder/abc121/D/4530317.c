#include<stdio.h>
         
    unsigned long int XOR(unsigned long int n){
       	if(n==-1){
          return 0;
        }
       	else if(n%4==1){
       		return 1;
       	}
       	else if(n%4==3){
       		return 0;
       	}
       	else if(n%4==2){
       		return 1^n;
       	}
       	else{
       		return n;
      	}
    }
     
    int main(void){
       	unsigned long int A,B;
       	scanf("%lu %lu",&A,&B);
       	//printf("%lu %lu\n", XOR(A-1), XOR(B));
    	printf("%lu\n",XOR(A-1)^XOR(B));
        return 0;
    } 