#include <stdio.h>
int main(void){
    // Your code here!
    char c[1000][21];
    int n,num[1000],i,place,max=0,g=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %d",&c[i],&num[i]);
        g+=num[i];
        if(max<num[i]){
            max = num[i];
            place = i;
        }
    }
    if(g/2<max)
        printf("%s\n",c[place]);
    else
        printf("atcoder\n");
} 