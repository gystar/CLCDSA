#include <stdio.h>
int main(void){
    int A = 0; int B = 0;
    char S[20] = {0};
    scanf("%ld %ld", &A, &B);
    scanf("%s", S);
    int flag = 0;
    for(int i = 0; i < A + B + 1; i++){
        if(i == A){
            if(S[i] != 45){
                flag = 1;
                break;
            }
        }else {
            if(S[i] < 48 || S[i] > 57){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1){
        printf("No\n");
    }else {
        printf("Yes\n");
    }
    return 0;
} 