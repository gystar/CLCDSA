#include <stdio.h>

int main(){
    int n, i, j, k, max = 0, sum = 0;
    int List[n];

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &List[i]);
    }

    for (j = 0; j < n; j++){
        if (List[j] > max){
            max = List[j];
        }
    }

    for (k = 0; k < n; k++){
        sum = sum + List[k];
    }

    printf("%d", sum - max / 2);

    return 0;

} 