#include <stdio.h>
#include <string.h>

int main(void){
    char S[101];
    char T[101];
    scanf("%s", S);
    scanf("%s", T);
    int n = strlen(S);
    int count = 0;
    for(int i = 0; i < n ; i++){
         if(count != -1 && S[i] == T[0]){
            count = 0;
            for(int j = 0; j < n; j++){
                if(S[(i + j) % n] == T[j]){
                    count += 1;
                }
                if (count == n){
                    count = -1;
                    break;
                }
            }
         }
    }
    printf("%s\n", (count == -1) ? "Yes" : "No");
    return 0; 
} 