#include<stdio.h>
#include<stdlib.h>

int desc(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}

int main(){
    int num,i;
    int shohin[100];

    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&shohin[i]);
    }
    qsort(shohin,num, sizeof(int), desc);

    for(i=1;i<num;i++){
        if(shohin[0]!=shohin[i]){
            printf("%d\n",shohin[i]);
            break;
        }
    }
    return 0;
} 