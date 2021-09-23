#include <stdio.h>

int main(void)
{
    int N;  //???
    char ans[100];
    int num[4] = {0};
    int tmp;
    int i, j;
    
    scanf("%d%*c", &N);
    for(i = 0; i < N; i++){
        scanf("%c", &ans[i]);
        if(ans[i] == '1'){
            num[0]++;
        }else if(ans[i] == '2'){
            num[1]++;
        }else if(ans[i] == '3'){
            num[2]++;
        }else if(ans[i] == '4'){
            num[3]++;
        }else{
            printf("error\n");
        }
    }
    scanf("%*c");   //????????
    //????????
    for(i = 0; i < 4; i++){
        for(j = i; j < 4; j++){
            if(num[j] > num[i]){
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }
    printf("%d %d\n", num[0], num[3]);
    
    return 0;
} 