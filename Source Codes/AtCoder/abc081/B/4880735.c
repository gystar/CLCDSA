#include <stdio.h>
#include <string.h>

int main(void){
    char order[100];
    //char number[1000];
    //char *getInt;
    int x[200];
    int j, q, k = 0;
    
    if(fgets(order, 1000, stdin) == NULL){
        printf("????\n");
    }
    sscanf(order, "%d", &j);
    /*if(fgets(number, 1000, stdin) == NULL){
        printf("???\n");
    }
    getInt = strtok(number, " \n");
    sscanf(getInt, "%d", &x[0]);
    for(int i = 1; i < j; i++){
        getInt = strtok(NULL, " \n");
        sscanf(getInt, "%d", &x[i]);
    }*/
    for(int i = 0; i < j; i++){
        scanf("%d", &x[i]);
    }
    while(1){
        for(q = 0; q < j; q++){
            if(x[q] % 2){
                break;
            }else{
                x[q] /= 2;
            }
        }
        if(q == j){
            k++;
        }else{
            break;
        }
    }
    printf("%d\n", k);
    return 0;
} 