#include <stdio.h>

int main(void){
    int n,d,k,l[10010],r[10010],s[110],t[110];
    scanf("%d%d%d",&n,&d,&k);
    for (int i=0; i<d; i++){
        scanf("%d%d",&l[i],&r[i]);
    }
    for (int i=0; i<k; i++){
        scanf("%d%d",&s[i],&t[i]);
    }
    for (int i=0; i<k; i++){
        int min=s[i],max=s[i];
        for (int j=0; j<d; j++){
            if (l[j]<=min && r[j]>=min){
                min=l[j];
            }
            if (l[j]<=max && r[j]>=max){
                max=r[j];
            }
            if (min<=t[i] && max>=t[i]){
                printf("%d\n",j+1);
                break;
            }
        }
    }
	return 0 ;
} 