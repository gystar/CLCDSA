#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    double parameter;
    int bug, bug_sum = 0;
    int i;
    
    scanf("%d%*c", &N);
    parameter = N * 1.0;
    for(i = 0; i < N; i++){
        scanf("%d%*c", &bug);
        if(bug == 0){
            parameter--;
        }else{
            bug_sum += bug;
        }
    }
    
    printf("%d\n", (int)ceil(bug_sum / parameter));
    
    return 0;
} 