#include <string.h>
int main(void){
    int N;
    scanf("%d", &N);
    char w[N][11];
    int ans = 1;
    char w1 = '\0';
    char wl = '\0';
    for(int i = 0; i < N; i++){
        scanf("%s", w[i]);
        w1 = w[i][0];
        if(i > 0){
            if(w1 != wl){
                ans = 0;
            }
            for(int j = 0; j < i; j++){
                if(strcmp(w[j], w[i]) == 0){
                    ans = 0;
                    break;
                }
            }
        }
        wl = w[i][strlen(w[i]) - 1]; 
    }
    printf("%s\n", ans ? "Yes": "No");
    return 0; 
} 