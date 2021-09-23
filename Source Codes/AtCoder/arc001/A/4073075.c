#include <stdio.h>

int main(){
    int N, Mtemp, mtemp;
    char c[100];
    int n[5] = {}; 

    scanf("%d", &N);
    scanf("%s", c); 
    
    for(int i = 0; i < N; i++){
        for(int j = 1; j <= 4; j++){
            if(c[i]-'0' == j){ 
                n[j]++;
                break;
            }
        }
    }   

    Mtemp = n[1];
    mtemp = n[1];

    for(int j = 2; j <= 4; j++){
        if(n[j] > Mtemp){
            Mtemp = n[j];
        }else if(n[j] < mtemp){
            mtemp = n[j];
        }
    }   

    printf("%d %d\n", Mtemp, mtemp);

return 0;
} 