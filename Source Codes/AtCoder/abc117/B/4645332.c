#include <stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    int l;
    int max = 0;
    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &l);
        sum += l;
        if(l > max){max = l;}
    }
    if(max * 2 < sum) printf("%s", "Yes\n");
    else printf("%s", "No\n");
    return 0; 
} 