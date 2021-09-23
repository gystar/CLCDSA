#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i;
    double total,temp;
    char *s;
    s=(char*)malloc(sizeof(char)*10);
    scanf("%d",&n);
    total=0;
    for(i=0;i<n;i++){
        scanf("%lf %s",&temp,s);
        if(s[0]=='J'){
            total+=temp;
        }else{
            total+=temp*380000.0;
        }
    }
    printf("%lf\n",total);
    free(s);
    return 0;
} 